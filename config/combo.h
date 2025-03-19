#define COMBO(NAME, BINDINGS, KEYPOS) \
    combo_##NAME { \
        timeout-ms = <35>; \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
    };