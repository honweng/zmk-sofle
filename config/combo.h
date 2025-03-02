#define COMBO(NAME, BINDINGS, KEYPOS, LAYER) \
    combo_##NAME { \
        timeout-ms = <50>; \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
        layers = <LAYER>; \
    };