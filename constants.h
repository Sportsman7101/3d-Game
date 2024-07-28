#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

#define FALSE 0
#define TRUE 1

#define FPS 30
#define FRAME_TARGET_TIME (1000 / FPS)

//MAP CONSTANTS
#define MAP_X 4
#define MAP_Y 4

int game_map[MAP_X][MAP_Y]= {
    {1, 1, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

//VECTOR
typedef struct{
    double x;
    double y;
} vec2;



