# Build Options ->
# TODO explicitly disable more shiz

NKRO_ENABLE = yes          # Enable N-Key Rollover
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite bootloader (so useful!)
LTO_ENABLE = yes		       # Enables link time optimizations for small compile size

MOUSEKEY_ENABLE = no       # Mouse keys
CONSOLE_ENABLE = no        # Console for debug
EXTRAKEY_ENABLE = no       # Audio control and System control

AUDIO_ENABLE = no          # Audio output
ENCODER_ENABLE = no		     # Enables rotary encoders
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
SPLIT_KEYBOARD = no		     # Enables split keyboard options
COMMAND_ENABLE = no        # Commands for debug and configuration
BACKLIGHT_ENABLE = no      # Enables keyboard backlight functionality

MIDI_ENABLE = no # Fuck no
BLUETOOTH_ENABLE = no # Also fuck no
RING_BUFFERED_6KRO_REPORT_ENABLE = no # I prefer NKRO
COMMAND_ENABLE = no # Debugging isn't needed when the keyboard works
MOUSE_SHARED_EP = no # The digital mouse doesn't need to share a pin with NKRO when it is disabled

DEBOUNCE_TYPE = sym_eager_pk # Around a 5ms decrease in latency over the default
