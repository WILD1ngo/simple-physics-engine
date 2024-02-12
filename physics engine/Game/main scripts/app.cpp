#include "raylib.h"
#include "app.h"

Application::Application(int screenWidth, int screenHeight) {

    //initilaz the game all the settings
    InitWindow(screenWidth, screenHeight, "Yoav's game");
    




}

void Application::mainLoop() {
    SetTargetFPS(60);
    while (WindowShouldClose() == false) {
        BeginDrawing();
        

        //rendering logic goes here
        ClearBackground(BLACK);




        EndDrawing();
    }
    CloseWindow();
}
