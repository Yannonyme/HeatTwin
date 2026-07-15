import esphome.codegen as cg
import esphome.config_validation as cv
heattwin_ns = cg.esphome_ns.namespace("heattwin")
HeatTwinComponent = heattwin_ns.class_("HeatTwinComponent", cg.Component)
CONFIG_SCHEMA=cv.COMPONENT_SCHEMA
async def to_code(config):
    pass
