// en-us is our base language translation file
#include "translation/base.h"
static char const * const zn_ch[]={
	[T_ON]="已开启",
	[T_OFF]="已关闭",
	[T_GND]="GND",
	[T_LOADED]="Loaded",
	[T_SAVED]="Saved",
	[T_USE_PREVIOUS_SETTINGS]="Use previous settings?",
	[T_MODE_ERROR_NO_EFFECT]="错误：该指令在当前模式无效",
	[T_MODE_ERROR_NO_EFFECT_HIZ]="该指令在当前HiZ模式无效，请按m键选择模式",
	[T_MODE_NO_HELP_AVAILABLE]="没有可用的帮助",
	[T_PRESS_ANY_KEY_TO_EXIT]="按任意键退出页面",
	[T_MODE_MODE]="模式",
	[T_MODE_INVALID_OPTION]="该选择无效！",
	[T_MODE_CHOOSE_AVAILABLE_PIN]="请选择可用的pin：",
	[T_MODE_ALL_PINS_IN_USE]="所有pins都被选用了！",
	[T_MODE_PULLUP_RESISTORS]="上拉电阻",
	[T_MODE_POWER_SUPPLY]="电源",
	[T_MODE_DISABLED]="不可用",
	[T_MODE_ENABLED]="可用",
	[T_MODE_BITORDER]="Bitorder",
	[T_MODE_BITORDER_MSB]="MSB",
	[T_MODE_BITORDER_LSB]="LSB",
	[T_MODE_DELAY]="Delay",
	[T_MODE_US]="us",
	[T_MODE_MS]="ms",
	[T_MODE_ADC_VOLTAGE]="Volts on",
	[T_MODE_ERROR_PARSING_MACRO]="Error parsing macro",
	//FREQ
	[T_MODE_PWM_GENERATE_FREQUENCY]="生成频率",
    [T_MODE_FREQ_MEASURE_FREQUENCY]="频率测试",
    [T_MODE_FREQ_FREQUENCY]="频率",
	[T_MODE_FREQ_DUTY_CYCLE]="占空比/工作周期",
    //POWER SUPPLY
    [T_PSU_DAC_ERROR]="PSU DAC error, please run self-test",
    [T_PSU_CURRENT_LIMIT_ERROR]="Current over limit, power supply disabled",
    [T_PSU_SHORT_ERROR]="Potential short circuit, power supply disabled",
    [T_PSU_ALREADY_DISABLED_ERROR]="Power supply already disabled",    
    //SPI
	[T_HWSPI_SPEED_MENU]="SPI通信速率",
	[T_HWSPI_SPEED_PROMPT]="KHz (100KHz*)",
	[T_HWSPI_BITS_MENU]="数据位",
	[T_HWSPI_BITS_PROMPT]="4 到 8 (8*)",
	[T_HWSPI_CLOCK_POLARITY_MENU]="时钟极性\r\n 1. 低怠速*\r\n 2. 高怠速",
	[T_HWSPI_CLOCK_POLARITY_PROMPT]="极性",
	[T_HWSPI_CLOCK_PHASE_MENU]="时钟相位\r\n 1. LEADING edge\r\n 2. TRAILING edge*",
	[T_HWSPI_CLOCK_PHASE_PROMPT]="Phase",
	[T_HWSPI_CS_IDLE_MENU]="Chip select\r\n 1. Active HIGH (CS)\r\n 2. Active LOW (!CS)*",
	[T_HWSPI_CS_IDLE_PROMPT]="片选/芯片选择",
	[T_HWSPI_ACTUAL_SPEED_KHZ]="实际速度",
	[T_HWSPI_CS_SELECT]="芯片选择 Select (%d)",
	[T_HWSPI_CS_DESELECT]="芯片选择 Deselect (%d)",
    //UART
	[T_UART_SPEED_MENU]="UART 速",
	[T_UART_SPEED_PROMPT]="Baud (115200*)",
	[T_UART_PARITY_MENU]="Parity\r\n 1. None*\r\n 2. Even\r\n 3. Odd",
	[T_UART_PARITY_PROMPT]="Parity",
	[T_UART_DATA_BITS_MENU]="Data bits",
	[T_UART_DATA_BITS_PROMPT]="5 to 8 bits (8*)",
	[T_UART_STOP_BITS_MENU]="Stop bits\r\n 1. 1*\r\n 2. 2",
	[T_UART_STOP_BITS_PROMPT]="Bits",
	[T_UART_BLOCKING_MENU]="使用屏蔽功能？Use blocking functions?\r\n 1. No\r\n 2. Yes",
	[T_UART_BLOCKING_PROMPT]="屏蔽Block",
	[T_UART_ACTUAL_SPEED_BAUD]="实际速度",
	[T_UART_BAUD]="baud波特率",
    //I2C
	[T_HWI2C_SPEED_MENU]="I2C speed",
	[T_HWI2C_SPEED_PROMPT]="KHz (400KHz*)",
	[T_HWI2C_DATA_BITS_MENU]="Data bits\r\n 1. 8*\r\n 2. 10",
	[T_HWI2C_DATA_BITS_PROMPT]="Bits",
    //LEDs
	[T_HWLED_DEVICE_MENU]="LED type\r\n 1. WS2812/SK6812/'NeoPixel' (single wire interface)* \r\n 2. APA102/SK9822 (clock and data interface)",
    [T_HWLED_DEVICE_MENU_3]="Onboard LEDs (15 SK6812s)",
	[T_HWLED_DEVICE_PROMPT]="Type",
	[T_HWLED_NUM_LEDS_MENU]="Number of LEDs in the strip",
	[T_HWLED_NUM_LEDS_PROMPT]="1 to 10000 (1*)",
	//HELP
    [T_HELP_TITLE]="General Commands\t\t\tProtocol Interaction",
	[T_HELP_BLANK]="\t\t\t",
	[T_HELP_1_2]="Converts X/reverse X\t",
	[T_HELP_1_3]="自检测试\t\t",
	[T_HELP_1_4]="重启Bus Pirate\t",
	[T_HELP_1_5]="切换到系统启动加载器\t",
	[T_HELP_1_6]="Delay 1 us/ms\t\t",
	[T_HELP_1_7]="AUXPIN (low/HI/READ)\t",
	[T_HELP_1_8]="-\t\t\t",
	[T_HELP_1_9]="AUX assignment (aux/CS)\t",
	[T_HELP_1_22]="Show volts on IOx (once/CONT)",
	[T_HELP_1_10]="Show volts all IOs (once/CONT)",
	[T_HELP_1_11]="Measure freq on IOx (once/CONT)",
	[T_HELP_1_23]="Monitor freq (off/ON)\t",
	[T_HELP_1_12]="生成频率（关/开）",
	[T_HELP_1_13]="Help (general/PROTOCOL)\t",
	[T_HELP_1_14]="版本详情/statusinfo\t",
	[T_HELP_1_15]="Bitorder (msb/LSB)\t",
	[T_HELP_1_16]="切换模式\t\t",
	[T_HELP_1_17]="Set number display format",
	[T_HELP_1_18]="上拉电阻（关/开）",
	[T_HELP_1_19]="-\t\t\t",
	[T_HELP_1_20]="Show volts/states\t",
	[T_HELP_1_21]="电源（关/开）\t",
	[T_HELP_2_1]="Mode macro x/list all",
	[T_HELP_2_3]="Start",
	[T_HELP_2_4]="Stop",
	[T_HELP_2_5]="Start with read",
	[T_HELP_2_6]="Stop",
	[T_HELP_2_7]="Send string",
	[T_HELP_2_8]="",
	[T_HELP_2_9]="",
	[T_HELP_2_10]="Send value",
	[T_HELP_2_11]="Read",
	[T_HELP_2_12]="CLK hi",
	[T_HELP_2_13]="CLK lo",
	[T_HELP_2_14]="CLK tick",
	[T_HELP_2_15]="DAT hi",
	[T_HELP_2_16]="DAT lo",
	[T_HELP_2_17]="DAT read",
	[T_HELP_2_18]="Bit read",
	[T_HELP_2_19]="Repeat e.g. r:10",
	[T_HELP_2_20]="Bits to read/write e.g. 0x55.2",
	[T_HELP_2_21]="User macro x/list all",
	[T_HELP_2_22]="User macro assign x",
    //INFO
	[T_INFO_FIRMWARE]="固件",
	[T_INFO_BOOTLOADER]="系统启动加载器",
	[T_INFO_WITH]="with",
	[T_INFO_RAM]="RAM随机储存器",
	[T_INFO_FLASH]="FLASH",
	[T_INFO_SN]="S/N序列号",
	[T_INFO_WEBSITE]="https://BusPirate.com/",
	[T_INFO_SD_CARD]="SD卡",
	[T_INFO_FILE_SYSTEM]="文件系统",
	[T_NOT_DETECTED]="未侦察到",
	[T_INFO_AVAILABLE_MODES]="可选用的模式",
	[T_INFO_CURRENT_MODE]="主动模式",
	[T_INFO_POWER_SUPPLY]="电源",
	[T_INFO_CURRENT_LIMIT]="限制电流",
	[T_INFO_PULLUP_RESISTORS]="上拉电阻",
	[T_INFO_FREQUENCY_GENERATORS]="频率生成器",
	[T_INFO_DISPLAY_FORMAT]="显示格式",
	[T_INFO_DATA_FORMAT]="数据格式",
	[T_INFO_BITS]="比特位",
	[T_INFO_BITORDER]="比特位次序",
	//CONFIG MENU
	[T_CONFIG_FILE]="Configuration file",
	[T_CONFIG_CONFIGURATION_OPTIONS]="Configuration options",
	[T_CONFIG_LANGUAGE]="Language",
	[T_CONFIG_ANSI_COLOR_MODE]="ANSI color mode",
	[T_CONFIG_ANSI_TOOLBAR_MODE]="ANSI toolbar mode",
	[T_CONFIG_LANGUAGE_ENGLISH]="English",
	[T_CONFIG_LANGUAGE_CHINESE]="Chinese (simplified)",
	[T_CONFIG_DISABLE]="Disable",
	[T_CONFIG_ENABLE]="Enable",
    [T_CONFIG_SCREENSAVER]="LCD screensaver",
    [T_CONFIG_SCREENSAVER_5]="5 minutes",
    [T_CONFIG_SCREENSAVER_10]="10 minutes",
    [T_CONFIG_SCREENSAVER_15]="15 minutes",
    [T_CONFIG_LEDS_EFFECT]="LED effect",
    [T_CONFIG_LEDS_EFFECT_SOLID]="Solid",
    [T_CONFIG_LEDS_EFFECT_ANGLEWIPE]="Angle wipe",
    [T_CONFIG_LEDS_EFFECT_CENTERWIPE]="Center wipe",
    [T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE]="Clockwise wipe",
    [T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE]="Top side wipe",
    [T_CONFIG_LEDS_EFFECT_SCANNER]="Scanner",
	[T_CONFIG_LEDS_EFFECT_CYCLE]="Cycle",
    [T_CONFIG_LEDS_COLOR]="LED color",
    [T_CONFIG_LEDS_COLOR_RAINBOW]="Rainbow",
    [T_CONFIG_LEDS_COLOR_RED]="Red",
    [T_CONFIG_LEDS_COLOR_ORANGE]="Orange",
    [T_CONFIG_LEDS_COLOR_YELLOW]="Yellow",
    [T_CONFIG_LEDS_COLOR_GREEN]="Green",
    [T_CONFIG_LEDS_COLOR_BLUE]="Blue",
    [T_CONFIG_LEDS_COLOR_PURPLE]="Purple",
    [T_CONFIG_LEDS_COLOR_PINK]="Pink",
    [T_CONFIG_LEDS_BRIGHTNESS]="LED brightness",
    [T_CONFIG_LEDS_BRIGHTNESS_10]="10%",
    [T_CONFIG_LEDS_BRIGHTNESS_20]="20%",
    [T_CONFIG_LEDS_BRIGHTNESS_30]="30%",
    [T_CONFIG_LEDS_BRIGHTNESS_40]="40%",
    [T_CONFIG_LEDS_BRIGHTNESS_50]="50%",
    [T_CONFIG_LEDS_BRIGHTNESS_100]="100% ***WARNING: will damage USB port without external power supply***"   
};

static_assert(count_of(zn_ch)==T_LAST_ITEM_ALWAYS_AT_THE_END, "Missing zn_ch translations!");
