#pragma once
#include "esphome/core/component.h"
namespace esphome::heattwin {
class HeatTwinComponent: public Component{
 public:
 void setup() override;
 void loop() override;
};
}
