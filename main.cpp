#include <iostream>
#include "Rectangel.h"
#include "Para.h"
#include "Square.h"

using namespace std;

int main()
{
    Rectangel r;

    //call custom constructor
    Rectangel r1(20, 20);

    Para p (30, 30, 30);

    Square s(40);

    cout << "The area of the rect is : " << r.getArea() << endl;
    cout << "The area of the rect r1 is : " << r1.getArea() << endl;
    cout << "The volume of our shap is :" << p.getVolume() << endl;
    cout << "The area of the square is : " << s.getArea() << endl;

    return 0;
}
