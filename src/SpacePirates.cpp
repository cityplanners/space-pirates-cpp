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

    window->InitWindow();

}

void SpacePirates::initVulkan(){

}

void SpacePirates::mainLoop(){
    window->MainLoop();
}

void SpacePirates::cleanup(){
    window->Cleanup();
    delete window;
}