#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "SpacePirates.h"

int main(int argc, char** argv)
{
    SpacePirates app;
    
    try{
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}