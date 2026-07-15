# HeatTwin

## Vision
HeatTwin est une plateforme open source d'analyse, d'optimisation et de diagnostic des systèmes de chauffage résidentiels.

### Principes
- ESPHome fournit l'infrastructure.
- HeatTwin fournit l'intelligence métier.
- Architecture plugin.
- Compatibilité Home Assistant, MQTT et autres écosystèmes.

## Architecture

```text
ESPHome
 ├─ WiFi
 ├─ OTA
 ├─ MQTT
 ├─ API HA
 └─ HeatTwin
     ├─ Registry
     ├─ Scheduler
     ├─ Boiler Drivers
     ├─ Thermal Engine
     ├─ Learning Engine
     └─ Diagnostics
```

## Roadmap
### v0.0.1
- Scheduler
- Registry
- Driver WB2A
- Publication des premiers capteurs

### v0.1
- DS18B20
- Delta T
- Cycles/h

### v0.2
- Gazpar
- Rendement
- Puissance

## Structure du dépôt
```text
components/heattwin/
docs/
example/
scripts/
```

## Build rapide
```bash
./scripts/build.sh example/wb2a.yaml
```

## Flash
```bash
./scripts/flash.sh example/wb2a.yaml
```

## Contribution
1. Fork
2. Branche feature
3. Pull Request
4. Review
