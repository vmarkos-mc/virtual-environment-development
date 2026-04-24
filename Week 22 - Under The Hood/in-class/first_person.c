// first_person.c
#include "raylib.h"
#include "rcamera.h"

#define N_OBJECTS 10
#define RADIUS 20
#define OBJECT_HEIGHT 2
#define WALL_HEIGHT 5.0f

int main() {
    // most stuff takes place here.
    const int windowWidth = 1920;
    const int windowHeight = 1080;
    const Vector3 ORIGIN = (Vector3) { 0.0f, 0.0f, 0.0f };

    // This function evidently initialises a window object in memory.
    InitWindow(windowWidth, windowHeight, "Simple First Person Universe");

    // Setup a camera, i.e., a viewpoint to our universe
    Camera3D camera = { 0 }; // Dummy initialisation
    camera.position = (Vector3) { 0.0f, 2.0f, 4.0f };
    camera.target = (Vector3) { 0.0f, 2.0f, 0.0f }; // Where our camera looks at
    camera.up = (Vector3) { 0.0f, 1.0f, 0.0f }; // Normal vector indicating which axes our camera rotates towards its target
    camera.fovy = 60.0f; // Roughly speaking, the angle our camera should be rotated by.
    camera.projection = CAMERA_PERSPECTIVE; // How to project the 3D space onto our 2D screens.



    // Randomly positioned objects
    Vector3 objectPositions[N_OBJECTS] = { 0 }; // Null initialisation
    
    for (int i = 0; i < N_OBJECTS; i++) {
        objectPositions[i] = (Vector3) {
            (float) GetRandomValue(-RADIUS, RADIUS), // Random X value
            OBJECT_HEIGHT / 2.0f, // To make sure this is a float
            (float) GetRandomValue(-RADIUS, RADIUS), // Random Z value
        };
    }

    DisableCursor(); // This function restricts cursor capturing / movement inside the current window.

    // We can set the target FPS using...
    SetTargetFPS(60);

    // Game loop
    while (!WindowShouldClose()) {
        // Main game logic takes place here.

        // Make sure our camera is up to date
        // UpdateCamera(Camera3D* camera, CameraMode cameraMode)
        UpdateCamera(&camera, CAMERA_FIRST_PERSON);

        // Set a "reset focus" mode
        if (IsKeyPressed(KEY_R))
            camera.target = ORIGIN;

        BeginDrawing(); // Start messing around with the screen / camera
            ClearBackground(RAYWHITE); // This just sets the screen background to some colour
            BeginMode3D(camera); // "Start" our camera
                // In this code block, we make any 3D related rendering / operations
                // Draw the floor, corresponding to [-20, 20] x [-20, 20].
                DrawPlane(ORIGIN, (Vector2) { 40.0f, 40.0f }, LIGHTGRAY);
                // Draw some walls
                // 40.0f and 1.0f are just some magic numbers that work for us.
                DrawCube((Vector3) {-20.0f, WALL_HEIGHT / 2.0f, 0.0f }, 1.0f, WALL_HEIGHT, 40.0f, MAROON);
                DrawCube((Vector3) {20.0f, WALL_HEIGHT / 2.0f, 0.0f }, 1.0f, WALL_HEIGHT, 40.0f, MAROON);
                DrawCube((Vector3) {0.0f, WALL_HEIGHT / 2.0f, 20.0f }, 40.0f, WALL_HEIGHT, 1.0f, MAROON);
                DrawCube((Vector3) {0.0f, WALL_HEIGHT / 2.0f, -20.0f }, 40.0f, WALL_HEIGHT, 1.0f, MAROON);
                    
                // Place objects
                for (int i = 0; i < N_OBJECTS; i++) {
                    DrawCube(objectPositions[i], OBJECT_HEIGHT, OBJECT_HEIGHT, OBJECT_HEIGHT, BLUE);
                }

            EndMode3D();
        EndDrawing(); // This destructs anything initialised by BeginDrawing()
    }

    // Before we are done, we have to kill the window we created (this is, essentially, a destructor)
    CloseWindow();

    return 0;
}
