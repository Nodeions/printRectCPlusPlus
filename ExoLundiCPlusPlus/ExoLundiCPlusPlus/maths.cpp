#include <iostream>
#include "maths.h"


Rectangle::Rectangle()
{
	m_x = 0;
	m_y = 0;
	m_longueur = 0;
	m_largeur = 0;
	m_opacity = 0;
}

//Rectangle::Rectangle(int x, int y, int largeur, int longueur, int opacity)
//{
//	m_x = x;
//	m_y = y;
//	m_longueur = longueur;
//	m_largeur = largeur;
//	m_opacity = opacity;
//}

Rectangle::~Rectangle() 
{

}

void Rectangle::SetLargueur(int largueur) 
{
	m_largeur = largueur;
}

int Rectangle::GetLongueur() 
{
	return m_longueur;
}

void Rectangle::SetLongueur(int longueur)
{
	m_longueur = longueur;
}

int Rectangle::GetLargueur()
{
	return m_largeur;
}

void Rectangle::Draw()
{
	for (int row = 0; row < m_longueur; row++) 
	{
		for (int col = 0; col < m_largeur; col++) 
		{
			if (row == 0 || row == (m_longueur - 1)) 
			{
				std::cout << "-";		
			}
			else 
			{
				if (col == 0 || col == (m_largeur - 1)) 
				{
					std::cout << "|";
					//std::cout << j;
				}
				else
					std::cout << " ";
			}
		}
		std::cout << "" << std::endl;
	}
}