#include "Map.h"
#include "Player.h"

Map::Map(int width, int height, Player* player) {
    this->width = width;
    this->height = height;
    this->playerPtr = new Player();
    playerPtr->setY(1);
    playerPtr->setX(1);
    grid = new char*[height];

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                grid[i][j] = '#';
            } else {
                grid[i][j] = '.';
            }
        }
    }
}