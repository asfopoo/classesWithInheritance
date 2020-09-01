#ifndef RECTANGEL_H
#define RECTANGEL_H

//Rectangle Class////////////////////
class Rectangel {

public:

    //default constructor
    Rectangel();
    //custom constructor
    Rectangel(int w, int l);

    //method definition outside of class
    void setWidth (int width);


    //method signature and definition inside the class
    void setLength(int length){
        this->length = length;
    }
    int getArea() {
        return width * length;
    }

private:
    int width;
    int length;
};

#endif // RECTANGEL_H
