#include "maths.h"

int main()
{
    /*cout << "La largeur du rectangle est de :\n" << i_largeur << endl;
    cout << "La longueur du rectangle est de :\n" << i_longueur << endl;
    cout << "La largeur du rectangle est de :\n" << i_opacity << endl;*/

    Rectangle rectangle;

    rectangle.SetLargueur(6);
    rectangle.SetLongueur(6);
    rectangle.Draw();
 
    return 0;
}