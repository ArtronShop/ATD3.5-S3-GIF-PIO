#include <Arduino.h>
#include <lvgl.h>
#include <ATD3.5-S3.h>
#include "gui/ui.h"

#define LED_Y_PIN (5)

void setup() {
  Serial.begin(115200);
  
  // Setup peripherals
  Display.begin(0); // rotation number 0
  Touch.begin();
  Sound.begin();
  // Card.begin(); // uncomment if you want to Read/Write/Play/Load file in MicroSD Card
  pinMode(LED_Y_PIN, OUTPUT);
  digitalWrite(LED_Y_PIN, HIGH); // off LED Y
  
  // Map peripheral to LVGL
  Display.useLVGL(); // Map display to LVGL
  Touch.useLVGL(); // Map touch screen to LVGL
  Sound.useLVGL(); // Map speaker to LVGL
  // Card.useLVGL(); // Map MicroSD Card to LVGL File System

  Display.enableAutoSleep(120); // Auto off display if not touch in 2 min
  
  // Add load your UI function
  ui_init();

  // Add event handle
  
  
  LV_IMG_DECLARE(logo_animation);
  lv_obj_t * img = lv_gif_create(lv_scr_act());
  lv_gif_set_src(img, &logo_animation);
  lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);
}

void loop() {
  Display.loop(); // Keep GUI work
}
