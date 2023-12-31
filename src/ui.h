// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: esk8_s3

#ifndef _ESK8_S3_UI_H
#define _ESK8_S3_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_screenHome
void ui_screenHome_screen_init(void);
extern lv_obj_t *ui_screenHome;
void ui_event_buttonBattery( lv_event_t * e);
extern lv_obj_t *ui_buttonBattery;
void ui_event_buttonNavigation( lv_event_t * e);
extern lv_obj_t *ui_buttonNavigation;
void ui_event_buttonTrip( lv_event_t * e);
extern lv_obj_t *ui_buttonTrip;
void ui_event_buttonSpeed( lv_event_t * e);
extern lv_obj_t *ui_buttonSpeed;
// SCREEN: ui_screenBattery
void ui_screenBattery_screen_init(void);
extern lv_obj_t *ui_screenBattery;
void ui_event_buttonBatBack( lv_event_t * e);
extern lv_obj_t *ui_buttonBatBack;
// SCREEN: ui_screenNavigation
void ui_screenNavigation_screen_init(void);
extern lv_obj_t *ui_screenNavigation;
void ui_event_buttonNavBack( lv_event_t * e);
extern lv_obj_t *ui_buttonNavBack;
// SCREEN: ui_screenTrip
void ui_screenTrip_screen_init(void);
extern lv_obj_t *ui_screenTrip;
void ui_event_buttonTrpBack( lv_event_t * e);
extern lv_obj_t *ui_buttonTrpBack;
// SCREEN: ui_screenSpeed
void ui_screenSpeed_screen_init(void);
extern lv_obj_t *ui_screenSpeed;
void ui_event_buttonSpdBack( lv_event_t * e);
extern lv_obj_t *ui_buttonSpdBack;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_bg_home_png);   // assets/bg_home.png
LV_IMG_DECLARE( ui_img_but_bat_png);   // assets/but_bat.png
LV_IMG_DECLARE( ui_img_but_pres_bat_png);   // assets/but_pres_bat.png
LV_IMG_DECLARE( ui_img_but_nav_png);   // assets/but_nav.png
LV_IMG_DECLARE( ui_img_but_pres_nav_png);   // assets/but_pres_nav.png
LV_IMG_DECLARE( ui_img_but_trp_png);   // assets/but_trp.png
LV_IMG_DECLARE( ui_img_but_pres_trip_png);   // assets/but_pres_trip.png
LV_IMG_DECLARE( ui_img_but_spd_png);   // assets/but_spd.png
LV_IMG_DECLARE( ui_img_but_pres_spd_png);   // assets/but_pres_spd.png
LV_IMG_DECLARE( ui_img_bg_bat_png);   // assets/bg_bat.png
LV_IMG_DECLARE( ui_img_but_back_png);   // assets/but_back.png
LV_IMG_DECLARE( ui_img_but_pres_back_png);   // assets/but_pres_back.png
LV_IMG_DECLARE( ui_img_bg_nav_png);   // assets/bg_nav.png
LV_IMG_DECLARE( ui_img_bg_trip_png);   // assets/bg_trip.png
LV_IMG_DECLARE( ui_img_bg_spd_png);   // assets/bg_spd.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
