#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <SDL2/SDL.H>
#include <stdbool.h>

/* constants */
#define TILE_SIZE 64
#define SCREEN_WIDTH (MAP_NUM_COLS * TILE_SIZE)
#define SCREEN_HEIGHT (MAP_NUM_ROWS * TILE_SIZE)


bool initializeWindow(void);
void destroyWindow(void);

#endif /* HEADER_H */
