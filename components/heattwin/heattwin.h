#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace heattwin {

class HeatTwinComponent : public Component
{
public:
    void setup() override;
    void loop() override;
};

}  // namespace heattwin
}  // namespace esphome