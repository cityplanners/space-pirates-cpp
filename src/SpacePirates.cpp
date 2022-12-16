#include "SpacePirates.h"

using namespace BONES;

void SpacePirates::run(){
    init();
    initVulkan();
    mainLoop();
    cleanup();
}

void SpacePirates::init(){
    window = new Window();

    window->initWindow();

}

void SpacePirates::initVulkan(){

}

void SpacePirates::mainLoop(){
    window->mainLoop();
}

void SpacePirates::cleanup(){
    window->cleanup();
    delete window;
}
