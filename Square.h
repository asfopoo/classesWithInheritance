#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangel.h"

//Square Class extends rectangle class -> inherits everything from the public space of rectangel
class Square : public Rectangel{


public:
    //constructor using rectangels custom constructor
    Square(int side):Rectangel(side, side){}
};


#endif // SQUARE_H
