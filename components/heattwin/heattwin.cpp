#include "heattwin.h"
#include "esphome/core/log.h"

namespace esphome {
namespace heattwin {

static const char *const TAG = "heattwin";

void HeatTwinComponent::setup()
{
    ESP_LOGI(TAG, "HeatTwin started");
}

void HeatTwinComponent::loop()
{
}

}  // namespace heattwin
}  // namespace esphome