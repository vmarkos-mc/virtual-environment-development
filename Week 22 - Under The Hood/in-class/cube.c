// cube.c
#include "raylib.h"

int main() {
    // most stuff takes place here.
    const int windowWidth = 1920;
    const int windowHeight = 1080;
    const Vector3 ORIGIN = (Vector3) { 0.0f, 0.0f, 0.0f };

    // This function evidently initialises a window object in memory.
    InitWindow(windowWidth, windowHeight, "Simple 3d cube");

    // Setup a camera, i.e., a viewpoint to our universe
    Camera3D camera = { 0 }; // Dummy initialisation
    camera.position = (Vector3) { 10.0f, 10.0f, 10.0f }; // Camera position, equally away from all three axes
    camera.target = ORIGIN; // Where our camera looks at
    camera.up = (Vector3) { 0.0f, 1.0f, 0.0f }; // Normal vector indicating which axes our camera rotates towards its target
    camera.fovy = 45.0f; // Roughly speaking, the angle our camera should be rotated by.
    camera.projection = CAMERA_PERSPECTIVE; // How to project the 3D space onto our 2D screens.
    
    Vector3 cubePosition = ORIGIN; // Where our cube will reside.

    DisableCursor(); // This function restricts cursor capturing / movement inside the current window.

    // We can set the target FPS using...
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose()) {
        // Main game logic takes place here.

        // Make sure our camera is up to date
        // UpdateCamera(Camera3D* camera, CameraMode cameraMode)
        UpdateCamera(&camera, CAMERA_FREE);

        // Set a "reset focus" mode
        if (IsKeyPressed(KEY_R))
            camera.target = ORIGIN;

        BeginDrawing(); // Start messing around with the screen / camera
            ClearBackground(RAYWHITE); // This just sets the screen background to some colour
            BeginMode3D(camera); // "Start" our camera
                // In this code block, we make any 3D related rendering / operations
                DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, BLUE);

                DrawGrid(10, 1.0f); // DrawGrid(int repeat, float step)
            EndMode3D();
        EndDrawing(); // This destructs anything initialised by BeginDrawing()
    }

    // Before we are done, we have to kill the window we created (this is, essentially, a destructor)
    CloseWindow();

    return 0;
}
