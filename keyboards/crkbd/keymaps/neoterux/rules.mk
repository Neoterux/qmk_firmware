# vim: ts=4 sw=4 et
# Build Options
# set to 'no' to disable, 'yes' to enable
# OLED Feature configuration
OLED_ENABLE         = no        # Enable the oled feature
OLED_DRIVER         = SSD1306   # Set the OLED driver name
RGBLIGHT_ENABLE     = no        # Enable WS2812 RGB Underlight
RGB_MATRIX_ENABLE   = no        # Enable RGB Matrix effects?
BACKLIGHT_ENABLE    = no        # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE    = no        # Enable Bootmagic Lite
MOUSEKEY_ENABLE     = no        # Mouse key availability (+4700 Bytes)
CONSOLE_ENABLE      = no        # Console for debug
COMMAND_ENABLE      = no        # Commands for debug and information
SPLIT_TRANSPORT     = mirror    # test what is  this
NKRO_ENABLE         = yes       # Enable N-key Rollover
COMBO_ENABLE        = no        # Enable key combo feature
LEADER_ENABLE       = no        # Enable leader key chording
# BOOTLOADER        = atmel-dfu # Set the Bootloader
BOOTLOADER          = caterina
EXTRAKEY_ENABLE     = no        # Audio Control and System control keys (+450 Bytes)
MIDI_ENABLE         = no        # MIDI controls
AUDIO_ENABLE        = no        # Audio output on port c6
UNICODE_ENABLE      = no        # Unicode
BLUETOOTH_ENABLE    = no        # Enable Bluetooth with Adafruit EZ-Key HID
SWAP_HANDS_ENABLE   = no        # Enable one-hand-typing
TAP_DANCE_ENABLE    = no        # Enable Tap-dance feature
VIA_ENABLE          = no        # Enable VIA
WPM_ENABLE          = no        # Enable WPM rate (https://beta.docs.qmk.fm/using-qmk/software-features/feature_wpm)

SLEEP_LED_ENABLE    = no        # Breathing sleep LED during USB suspend

# Advance
LTO_ENABLE          = yes       # Enables Link Time Optimization. Can save a good chunk of space (may cause errors)


