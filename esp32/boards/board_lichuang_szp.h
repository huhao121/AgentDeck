#pragma once

// ===== 立创·实战派 ESP32-S3 (ST7789 2.0" 320x240 SPI) =====
// MCU: ESP32-S3-WROOM-1 (16MB Flash, 8MB OPI PSRAM)

#define BOARD_DISPLAY_TYPE   DISPLAY_ST7789_SPI

// Display SPI Pins
#define BOARD_PIN_SPI_MOSI   40
#define BOARD_PIN_SPI_SCLK   41
#define BOARD_PIN_SPI_DC     39
#define BOARD_PIN_SPI_CS     -1  // 由 PCA9557 (I2C) IO0 硬件片选拉低
#define BOARD_PIN_SPI_RST    -1  // 由 PCA9557 (I2C) IO1 硬件复位拉高
#define BOARD_PIN_BL         42  // 背光引脚 (LEDC PWM)

// I2C Pins for PCA9557 IO Expander
#define BOARD_PIN_I2C_SDA    1
#define BOARD_PIN_I2C_SCL    2
#define BOARD_PCA9557_ADDR   0x19

// Display settings
#define BOARD_ROTATION       1     // Landscape: 320 x 240
#define BOARD_INVERT         true  // ST7789 IPS invert
#define BOARD_NATIVE_W       320
#define BOARD_NATIVE_H       240

// System dimensions
#define SCREEN_W             320
#define SCREEN_H             240
