// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: LED

#include "../ui.h"

void ui_Index_screen_init(void)
{
    ui_Index = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Index, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Index, lv_color_hex(0x107D5A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Index, 255, LV_PART_MAIN | LV_STATE_DEFAULT);


}
