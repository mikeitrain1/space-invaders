#include <raylib.h>

int main()
{
    int ballx = 400;
    int bally = 400;
    Color green = {20, 160, 133, 255};

    InitWindow( 800,  800,  "shuush" );
    SetTargetFPS(60);

    //game loop
    while(WindowShouldClose() == false)
    {
        //1 event handling
        //
        //
        //2upadting postion
        if(IsKeyDown(KEY_RIGHT)) 
            {
            ballx += 6;
            }
        else if (IsKeyDown(KEY_LEFT)) 
            {
            ballx -= 6; 
        }
        else if (IsKeyDown(KEY_UP)) 
        {
            bally -= 6; 
        }

        else if (IsKeyDown(KEY_DOWN)) 
            {
            bally += 6; 
            }




        //
        //
        //drawing

        BeginDrawing();
        ClearBackground(green);
        DrawCircle(ballx, bally, 20, WHITE);
        EndDrawing();

    }

    CloseWindow();
    return 0;
}
