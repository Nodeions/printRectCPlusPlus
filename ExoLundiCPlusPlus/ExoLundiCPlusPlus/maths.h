#pragma once

class Rectangle
{
public:
    Rectangle();
    /*Rectangle(int x, int y, int largeur, int longueur, int opacity);*/
    virtual ~Rectangle();
    int GetLargueur();
    void SetLargueur(int largueur);
    int GetLongueur();
    void SetLongueur(int longueur);
    void Draw();
protected:
    int m_x;
    int m_y;
    int m_largeur;
    int m_longueur;
    int m_opacity;
    //int m_couleur[3]; // A utiliser pour RGB
    //int* tabi_couleurdyn;
};
