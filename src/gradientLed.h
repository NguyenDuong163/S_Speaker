#ifndef GRADIENT_LED_H
#define GRADIENT_LED_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <ThingsBoard.h>

// Cấu hình LED
#define LED_PIN 48
#define NUM_LEDS 10
#define BRIGHTNESS 150

// Khai báo các biến màu
extern volatile uint8_t ledRed, ledGreen, ledBlue;
extern Adafruit_NeoPixel strip;

// Hàm khởi tạo LED
void initLed();

// Hàm set màu LED
void setLedColor(uint8_t red, uint8_t green, uint8_t blue);

// Hàm tạo hiệu ứng chuyển màu gradient
void gradientEffectTask(void *pvParameters);

// Xử lý RPC nhận màu RGB
RPC_Response setLedColorRPC(const RPC_Data &data);

#endif
