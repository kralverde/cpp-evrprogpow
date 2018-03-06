// Copyright 2018 Pawel Bylica.
// Licensed under the Apache License, Version 2.0. See the LICENSE file.

#pragma once

#include <cstdint>

namespace ethash
{
union hash256
{
    uint64_t words[4] = {
        0,
    };
    uint32_t hwords[8];
    char bytes[32];
};

union hash512
{
    uint64_t words[8] = {
        0,
    };
    uint32_t half_words[16];
    char bytes[64];
};
}
