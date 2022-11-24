#pragma once

#include "uiuc/PNG.h"
using namespace uiuc;

// Functions doing image transformation

PNG grayscale(PNG image);  
PNG createSpotlight(PNG image, int centerX, int centerY);
PNG illinify(PNG image);
PNG watermark(PNG firstImage, PNG secondImage);
