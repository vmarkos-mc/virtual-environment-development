// Just a raylib "hello world" program.
//
// In a nutshell, raylib is a graphics framework optimised for game development, so, you can use all your
// graphics knowledge to build a game, or custom shaders or whatever from scratch. You can use this either 
// for educational purposes or, actually, to draft block outs or make some lightweight games.

// This is the "master" header file for raylib.
#include "raylib.h"

int main() {
    // most stuff takes place here.
    const int windowWidth = 800;
    const int windowHeight = 500;

    // This function evidently initialises a window object in memory.
    InitWindow(windowWidth, windowHeight, "Hello world raylib window");

    // We can set the target FPS using...
    SetTargetFPS(60);

    // Game loop
    // WindowShouldClose() captures cases where the user closes the window, e.g.,
    // by pressing the ESC button or any OS-specific window killing combination
    // like Alt+F4, Ctrl+W etc.
    while (!WindowShouldClose()) {
        // Main game logic takes place here.
        BeginDrawing(); // Start messing around with the screen / camera
            ClearBackground(RAYWHITE); // This just sets the screen background to some colour
            // DrawText(const char* text, int posX, int, posX, int fontSize, Color color), where
            // color should be defined as a raylib color.
            DrawText("Hello, World!", 190, 200, 20, BLACK); // Draws text on screen
        EndDrawing(); // This destructs anything initialised by BeginDrawing()
    }

    // Before we are done, we have to kill the window we created (this is, essentially, a destructor)
    CloseWindow();

    return 0;
}
