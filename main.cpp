#include <iostream>
#include "classLaba5.h"
int main() {
    Point uno(35,8);
    Point dos(11,94);
    Point tres(55,42);
    Point quatro(16, 22);
    Polynom x(BLUE);
    x.add(uno);
    x.add(dos);
    x.add(tres);
    x.add(quatro);
    std::cout << x.FindPerimeter()<< "\t" << x.getColour() << " " << x.FindBiggestDiagonal()<< "\n" << std::endl;
    x.SortByX();
    std::cout << std::endl;
    x.SortByY();
    return 0;
}
