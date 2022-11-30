
#ifndef LABA5_CLASSLABA5_H
#define LABA5_CLASSLABA5_H
#include <vector>
#include <string>
#include "math.h"
enum Colour{
    RED,GREEN,BLUE,WHITE,YELLOW
};

class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    int GetX();
    int GetY();
    ~Point();
};

class Polynom{
private:
    std::string allColours[5]={    "RED","GREEN","BLUE","WHITE","YELLOW"};
public:
    std::vector<Point> allPoint;
    Colour pColour;
    void add(Point uno){
        allPoint.push_back(uno);
    }
    Polynom();
    Polynom(Colour pColour);
    std::string getColour();
    float Perimeter();
    float BiggetsDiagonal();
    void sortx();
    void sorty();
    ~Polynom();
};
#endif
