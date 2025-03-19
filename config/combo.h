#define COMBO(NAME, BINDINGS, KEYPOS) \
    combo_##NAME { \
        timeout-ms = <50>; \
        bindings = <BINDINGS>; \
        key-positions = <KEYPOS>; \
    };