// config/microphone_logger.h

#include "esphome.h"

class MicrophoneLogger : public PollingComponent {
 public:
  MicrophoneLogger() : PollingComponent(1000) {}

  void setup() override {
    // Инициализация при старте
    ESP_LOGI("mic_logger", "MicrophoneLogger started");
  }

  void update() override {
    // Тут ты можешь получить данные с микрофона, если есть API, или просто вывести логи для проверки
    ESP_LOGI("mic_logger", "Microphone is working");
  }
};
