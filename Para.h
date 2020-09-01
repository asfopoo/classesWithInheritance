#ifndef PARA_H
#define PARA_H
#include "Rectangel.h"
#include <iostream>

using namespace std;

//Para Class////////////////
class Para{

public:
    //constructor
    Para(int w, int l, int h):r(w,l),height(h){
        cout << "Para constructor called" << endl;
    }

    int getVolume() {
        return r.getArea() * height;
    }

private:
    Rectangel r;
    int height;

};

#endif // PARA_H
