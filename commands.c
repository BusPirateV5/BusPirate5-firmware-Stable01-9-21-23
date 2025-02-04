#include <stdio.h>
#include "pico/stdlib.h"
#include <stdint.h>
#include "pirate.h"
#include "system_config.h"
#include "modes.h"
#include "hardware/uart.h"
#include "pico/unique_id.h"
#include "mode/hiz.h"
#include "amux.h"
#include "auxpinfunc.h"
#include "font/font.h"
#include "ui/ui_lcd.h"
#include "ui/ui_prompt.h"
#include "ui/ui_parse.h"
#include "ui/ui_info.h"
#include "ui/ui_format.h"
#include "ui/ui_init.h"
#include "ui/ui_const.h"
#include "ui/ui_term.h"
#include "ui/ui_config.h"
#include "ui/ui_mode.h"
#include "pwm.h"
#include "freq.h"
#include "adc.h"
#include "psu.h"
#include "pullups.h"
#include "helpers.h"


void command_unknown (struct command_attributes *attributes, struct command_response *response)
{
    printf("Error: unknown command '%c'\r\n", attributes->command);
    response->error=true;
}

struct _command commands[]=
{
    {false, &command_unknown}, // " "
    {false, &helpers_mode_read_bit}, // "!" 
    {false, &helpers_mode_write_string}, // """
    {true, &mcu_reset}, // "#" 
    {true, &hw_jump_to_bootloader}, // "$" 
    {true, &helpers_delay_ms}, // "%"
    {true, &helpers_delay_us}, // "&"
    {false, &command_unknown}, // "'"
    {true, &helpers_mode_macro}, // "(" 
    {false, &command_unknown}, // ")"
    {false, &command_unknown}, // "*"
    {false, &command_unknown}, // "+"
    {false, &command_unknown}, // ","
    {false, &helpers_mode_data_high}, // "-"
    {false, &helpers_mode_data_s}, // "."
    {false, &helpers_mode_clock_high}, // "/"
    {false, &helpers_mode_write}, // "0"
    {false, &helpers_mode_write}, // "1"
    {false, &helpers_mode_write}, // "2"
    {false, &helpers_mode_write}, // "3"
    {false, &helpers_mode_write}, // "4"
    {false, &helpers_mode_write}, // "5"
    {false, &helpers_mode_write}, // "6"
    {false, &helpers_mode_write}, // "7"
    {false, &helpers_mode_write}, // "8"
    {false, &helpers_mode_write}, // "9"
    {false, &command_unknown}, // ":"
    {false, &command_unknown}, // ";"
    {false, &command_unknown}, // "<"
    {true, &helpers_show_int_formats}, // "="
    {true, &helpers_debug}, // ">"
    {true, &ui_info_print_help}, // "?"
    {true, &auxpinfunc_input}, // "@"
    {false, &auxpinfunc_high}, // "A" 
    {false, &command_unknown}, // "B"
    {true, &ui_config_main_menu}, // "C"
    {true, &helpers_delay_ms}, // "D"
    {false, &command_unknown}, // "E"
    {true, &freq_cont}, // "F"
    {false, &pwm_configure_enable}, // "G"
    {true, &helpers_mode_help}, // "H"
    {true, &ui_info_print_info}, // "I"
    {false, &command_unknown}, // "J"
    {false, &command_unknown}, // "K"
    {true, &helpers_bit_order_lsb}, // "L"
    {true, &ui_mode_enable}, // "M"
    {false, &command_unknown}, // "N"
    {true, &ui_mode_int_display_format}, // "O"
    {false, &pullups_enable}, // "P"
    {false, &command_unknown}, // "Q"
    {false, &helpers_mode_read}, // "R"
    {false, &command_unknown}, // "S"
    {false, &command_unknown}, // "T"
    {false, &command_unknown}, // "U"
    {true, &adc_measure_cont}, // "V"
    {true, &psu_enable}, // "W"
    {false, &command_unknown}, // "X"
    {false, &command_unknown}, // "Y"
    {false, &command_unknown}, // "Z"
    {false, &helpers_mode_start}, // "["
    {false, &helpers_mode_clock_low}, // "\"
    {false, &helpers_mode_stop}, // "]"
    {false, &helpers_mode_clock_tick}, // "^"
    {false, &helpers_mode_data_low}, // "_"
    {false, &command_unknown}, // "`"
    {false, &auxpinfunc_low}, // "a"
    {false, &helpers_numbits}, // "b"
    {true, &ui_config_main_menu}, // "c" 
    {true, &helpers_delay_us}, // "d"
    {false, &command_unknown}, // "e"
    {true, &freq_single}, // "f"
    {false, &pwm_configure_disable}, // "g"
    {true, &ui_info_print_help}, // "h"
    {true, &ui_info_print_info}, // "i"
    {false, &command_unknown}, // "j"
    {false, &command_unknown}, // "k"
    {true, &helpers_bit_order_msb}, // "l"
    {true, &ui_mode_enable}, // "m"
    {false, &command_unknown}, // "n"
    {true, &ui_mode_int_display_format}, // "o"
    {false, &pullups_disable}, // "p"
    {false, &command_unknown}, // "q"
    {false, &helpers_mode_read}, // "r"
    {false, &command_unknown}, // "s"
    {false, &command_unknown}, // "t"
    {false, &command_unknown}, // "u"
    {true, &adc_measure_single}, // "v"
    {false, &psu_disable}, // "w"
    {false, &command_unknown}, // "x"
    {false, &command_unknown}, // "y"
    {false, &command_unknown}, // "z"
    {false, &helpers_mode_start_with_read}, // "{"
    {true, &helpers_show_int_inverse}, // "|"
    {false, &helpers_mode_stop_with_read}, // "}"
    {true, &helpers_selftest} // "~" selftest
};
