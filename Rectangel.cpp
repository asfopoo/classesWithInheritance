#include "Rectangel.h"
#include <iostream>

using namespace std;

//deafualt constructor
Rectangel::Rectangel() {
    cout << "Defult constructor called" << endl;
    this->length = 5;
    this->width = 5;
}

//custom constructor
/* Rectangel::Rectangel(int w, int l){
    this->width = w;
    this->length = l;
} */

//Same custom constructor but with initializer list
Rectangel::Rectangel(int w, int l):width(w),length(l){
    //values are initialized in function defiinition
    cout << "custom constructor called" << endl;
}

//definition outside class
void Rectangel::setWidth(int width){
    this->width = width;
}
