#include <raylib.h>


int main() {
    // Initialize the window
    InitWindow(800, 600, "Game");
    SetTargetFPS(30);

    while (!WindowShouldClose()) 
    {
        // Start drawing
        BeginDrawing();
        ClearBackground(RED);
        DrawFPS(700,10);
        DrawCircle(400,300,20,WHITE);
        EndDrawing();
    }
    // Close the window and OpenGL context
    CloseWindow();

    return 0;
}
