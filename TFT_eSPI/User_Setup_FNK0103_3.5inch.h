/*
  TFT_eSPI setup for Freenove FNK0103 ESP32 Display, 3.5" 320x480 ST7796, resistive touch (FNK0114N)
  Based on Freenove's FNK0114N_3.5_320x480_ST7796.h

  Use with "#define FREENOVE_FNK0103_35" in ESP32CYD.ino.
  Copy this file over User_Setup.h in the TFT_eSPI library folder
  (Documents/Arduino/libraries/TFT_eSPI/User_Setup.h).
*/

#define USER_SETUP_INFO "FNK0103_3.5"

#define ST7796_DRIVER

#define TFT_WIDTH  320
#define TFT_HEIGHT 480

#define TFT_BL   27            // LED back-light control pin
#define TFT_BACKLIGHT_ON HIGH  // Level to turn ON back-light (HIGH or LOW)

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST  -1  // Display RESET is connected to ESP32 board RST

#define TOUCH_CS 33  // Chip select pin (T_CS) of touch screen, shares the display SPI bus

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

#define SPI_FREQUENCY  80000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000

#define USE_HSPI_PORT
