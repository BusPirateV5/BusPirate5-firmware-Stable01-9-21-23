#ifndef _STORAGE_
#define _STORAGE_
void storage_init(void);
bool storage_detect(void);
bool storage_mount(void);
uint32_t storage_new_file(void);
uint32_t storage_load_config(void);
uint32_t storage_save_config(void);


struct _mode_config_t { char tag[30]; uint32_t *config;};
uint32_t storage_save_mode(const char *filename, struct _mode_config_t *config_t, uint8_t count);
uint32_t storage_load_mode(const char *filename, struct _mode_config_t *config_t, uint8_t count);

static const char storage_fat_type_labels[][8]=
{
    "FAT12",
    "FAT16",
    "FAT32",
    "EXFAT",
    "UNKNOWN"
};
#endif
