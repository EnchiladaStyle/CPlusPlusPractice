#include <iostream>
#include <thread>
#include <chrono>

void printMaze(char maze[5][5]) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (maze[i][j] == '#') {
                std::cout << "\033[31m#\033[0m ";  // Red for walls
            } else if (maze[i][j] == '.') {
                std::cout << "\033[32m.\033[0m ";  // Green for paths
            } else if (maze[i][j] == 'V') {
                std::cout << "\033[34mV\033[0m ";  // Blue for visited spots
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    // Sample 5x5 maze
    char maze[5][5] = {
        {'#', '#', '#', '#', '#'},
        {'#', '.', '.', 'V', '#'},
        {'#', '.', '#', '.', '#'},
        {'#', 'V', '#', '.', '#'},
        {'#', '#', '#', '#', '#'}
    };

    printMaze(maze);

    return 0;
}