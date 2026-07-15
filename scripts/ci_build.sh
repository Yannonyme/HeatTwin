#!/usr/bin/env bash
set -e
for f in example/*.yaml; do esphome compile "$f"; done
