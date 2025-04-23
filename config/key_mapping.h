#define LAYER_BINDING(LAYER_NAME, BINDINGS, DISPLAY, SENSOR) \
layer_##LAYER_NAME { \
    bindings = < \
    BINDINGS \
    >; \
    display-name = DISPLAY; \
    sensor-bindings = <SENSOR>; \
};

#define QWERTY_LAYER LAYER_BINDING(qwerty, QWERTY_BINDINGS, "QWERTY", &inc_dec_kp C_VOLUME_UP C_VOL_DN) 
#define COLEMAK_DH_LAYER LAYER_BINDING(colemak_dh, COLEMAK_DH_BINDINGS, "COLEMAK", &inc_dec_kp C_VOLUME_UP C_VOL_DN) 
#define QWERTY_TAP_LAYER LAYER_BINDING(qwerty_tap, QWERTY_TAP_BINDINGS, "TAP", &inc_dec_kp C_VOLUME_UP C_VOL_DN) 
#define NUMBER_LAYER LAYER_BINDING(number, NUMBER_BINDINGS, "NUMBER", &scroll_encoder) 
#define SYMBOL_LAYER LAYER_BINDING(symbol, SYMBOL_BINDINGS, "SYMBOL", &scroll_encoder) 
#define FUNC_LAYER LAYER_BINDING(func, FUNC_BINDINGS, "FUNC", &scroll_encoder) 
#define NAVI_LAYER LAYER_BINDING(navi, NAVI_BINDINGS, "NAVI", &scroll_encoder) 
#define MOUSE_LAYER LAYER_BINDING(mouse, MOUSE_BINDINGS, "MOUSE", &scroll_encoder) 
#define MEDIA_LAYER LAYER_BINDING(media, MEDIA_BINDINGS, "MEDIA", &scroll_encoder) 
#define BUTTON_LAYER LAYER_BINDING(button, BUTTON_BINDINGS, "BUTTON", &scroll_encoder) 

