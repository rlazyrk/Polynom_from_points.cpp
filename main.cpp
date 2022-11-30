#include <iostream>
#include "classLaba5.h"
int main() {
    Point uno(100,7);
    Point dos(25,17);
    Point tres(40,28);
    Point quatro(18, 35);
    Polynom x(BLUE);
    x.add(uno);
    x.add(dos);
    x.add(tres);
    x.add(quatro);
    std::cout << x.Perimeter()<< "\t" << x.getColour() << " " << x.BiggetsDiagonal()<< "\n" << std::endl;
    x.sortx();
    std::cout << std::endl;
    x.sorty();
    return 0;
}
