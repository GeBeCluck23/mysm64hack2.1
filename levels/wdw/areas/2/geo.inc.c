// 0x0E000724
const GeoLayout wdw_geo_000724[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 12800, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(CAMERA_MODE_RADIAL, 0, 2000, 6000, -4352, 0, -4352, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE,            wdw_seg7_dl_07011E48),
               GEO_DISPLAY_LIST(LAYER_ALPHA,             wdw_seg7_dl_07012258),
               GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_seg7_dl_07012908),
               GEO_ASM(0,                      geo_movtex_pause_control),
               GEO_ASM(WDW_MOVTEX_AREA2_WATER, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(ENVFX_MODE_NONE,        geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
