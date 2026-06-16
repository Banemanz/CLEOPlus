#pragma once

#include "CCarGenerator.h"
#include <cstddef>
#include <cstdint>

class CCarGenerator_extended : public CCarGenerator
{
public:
	int32_t lastRandomizedID;
	uint32_t exIplFile;
	CVector exPos;
};

static_assert(offsetof(CCarGenerator_extended, lastRandomizedID) == 0x20, "CCarGenerator_extended::lastRandomizedID offset must match the extended car-generator layout");
static_assert(offsetof(CCarGenerator_extended, exIplFile) == 0x24, "CCarGenerator_extended::exIplFile offset must match the extended car-generator layout");
static_assert(offsetof(CCarGenerator_extended, exPos) == 0x28, "CCarGenerator_extended::exPos offset must match the extended car-generator layout");
