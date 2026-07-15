#!/usr/bin/env bash
set -e
CONFIG=${1:-example/wb2a.yaml}
echo Flashing $CONFIG
esphome run "$CONFIG"
