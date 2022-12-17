#include <iostream>

#include "classlaba5.h"

Point::Point(int a, int b) {
    x = a;
    y = b;
}
Point::Point() {
}
int Point::GetX() {
    return x;
}
int Point::GetY() {
    return y;
}
Point::~Point() {
}
Polynom::Polynom() {
}
Polynom::Polynom(Colour pColour1){
    polynomColour = pColour1;
}
std::string Polynom::getColour(){
    return allColours[polynomColour];
}
float Polynom::FindPerimeter() {
    float perimeter = 0;
    for(int i=0; i<(allPoint.size()-1);i++){
        perimeter += sqrt(pow(allPoint[i].GetX()-allPoint[i+1].GetX(),2)+pow(allPoint[i].GetY()-allPoint[i+1].GetY(),2));
    }
    perimeter +=  sqrt(pow(allPoint[0].GetX()-allPoint[allPoint.size()-1].GetX(),2)+pow(allPoint[0].GetY()-allPoint[allPoint.size()-1].GetY(),2));
    return perimeter;
}
float Polynom::FindBiggestDiagonal() {
    float Diagonal;
    float max = 0;
    for(int i=0; i<(allPoint.size());i++){
        for(int j=0; j < allPoint.size();j++){
            if((j != i+1) && (j != i-1) && (j != i)){
                Diagonal = sqrt(pow(allPoint[i].GetX()-allPoint[j].GetX(),2)+pow(allPoint[i].GetY()-allPoint[j].GetY(),2));
                if(max< Diagonal){
                    max=Diagonal;
                }
            }
        }
    }
    return max;
}
void Polynom::SortByX() {
        for (int startIndex = 0; startIndex < allPoint.size() - 1; ++startIndex)
        {
            int smallestIndex = startIndex;
            for (int currentIndex = startIndex + 1; currentIndex < allPoint.size(); ++currentIndex)
            {
                if (allPoint[currentIndex].GetX() < allPoint[smallestIndex].GetX())
                    smallestIndex = currentIndex;
            }
            std::swap(allPoint[startIndex], allPoint[smallestIndex]);
            }
        for (int index = 0; index < allPoint.size(); ++index) {
            std::cout << "(x:" << allPoint[index].GetX() <<  " y:" << allPoint[index].GetY()<< ") " ;
        }
    }
void Polynom::SortByY() {
    for (int startIndex = 0; startIndex < allPoint.size() - 1; startIndex++)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < allPoint.size(); currentIndex++)
        {
            if (allPoint[currentIndex].GetY() < allPoint[smallestIndex].GetY())
                smallestIndex = currentIndex;
        }
        std::swap(allPoint[startIndex], allPoint[smallestIndex]);
    }
    for (int index = 0; index < allPoint.size(); index++) {
        std::cout << "(x:" << allPoint[index].GetX() <<  " y:" << allPoint[index].GetY()<< ") " ;
    }
}
Polynom::~Polynom() {
}