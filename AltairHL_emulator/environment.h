/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

#pragma once

#include "altair_config.h"
#include "environment_types.h"

extern ENVIRONMENT_TELEMETRY environment;

void init_environment(ALTAIR_CONFIG_T *altair_config);
void update_weather(void);
