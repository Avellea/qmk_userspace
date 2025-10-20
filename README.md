# QMK userspace

This repository contains user-specific QMK keyboards, keymaps and short README files for each keyboard.

## Structure
```
/
└── keyboards/
    └── <keyboard-name>/
        └── keymaps/
            └── <keymap-name>/
                ├── config.h
                ├── keymap.c
                ├── README.md
                └── rules.mk
```


## Keyboards
These are the keyboards contained in this repository. More may be added as time goes on.

- gmmk2 — [GMMK V2 65% (ANSI)](keyboards/gmmk/gmmk2/p65/ansi/readme.md)

## Keymaps
- gmmk2
    - shironeko — daily driver (keyboards/gmmk/gmmk2/p65/ansi/keymaps/shironeko)
        - [Keymap information](keyboards/gmmk/gmmk2/p65/ansi/keymaps/shironeko/README.md)


## Build & flash
Build a keymap with QMK CLI:
- `qmk userspace-compile`

Flash (QMK CLI):
- `qmk flash -kb <keyboard> -km <keymap>`

## License
[GNU GPL2](LICENSE)

