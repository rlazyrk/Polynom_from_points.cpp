#include <iostream>
#include "classlaba5.h"
int main() {
    Point uno(35,8);
    Point dos(11,94);
    Point tres(55,42);
    Point quatro(16, 22);
    Polynom x(BLUE);
    x.Add(uno);
    x.Add(dos);
    x.Add(tres);
    x.Add(quatro);
    std::cout << x.FindPerimeter()<< "\t" << x.getColour() << " " << x.FindBiggestDiagonal()<< "\n" << std::endl;
    x.SortByX();
    std::cout << std::endl;
    x.SortByY();
    return 0;
}
