#pragma once

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "bones/engine.h"

class SpacePirates {
public:
    void run();
    BONES::Window* window;
private:
    void init();
    void initVulkan();
    void mainLoop();
    void cleanup();
};