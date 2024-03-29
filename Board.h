#ifndef BOARD_H
#define BOARD_H

#include "Block.h"
#include <vector>
#include <algorithm>

class Board {
private:
    int width;
    int height;
    std::vector<Point> allPoints;
    std::vector<Point> builtPoints;
public:
    Board(int width=20, int height=20);

    int getWidth();
    int getHeight();
    std::vector<Point> getAllPoints();
    std::vector<Point> getBuiltPoints();
    void setBuiltPoints(std::vector<Point> builtPoints);
    
    void setBorder();
    void refresh();
    void insertToBuiltPoints(std::vector<Point> insertPoints);
    int removeRow();
    

};

#endif
