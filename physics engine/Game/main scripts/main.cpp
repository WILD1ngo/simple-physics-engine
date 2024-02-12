#include <iostream>
#include "app.h"


int main() {

    const int screenWidth = 800;
    const int screenHeight = 600;

    Application app(screenWidth, screenHeight);
    
    app.mainLoop();
   
    return EXIT_SUCCESS;
}