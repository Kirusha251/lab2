#include"magazine.h"
#include<iostream>

Magazine::Magazine(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Magazine::~Magazine(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}


void Magazine::setTheme(char *theme)
{
	this->theme = theme;
}


void Magazine::getTheme()
{
	std::cout << this->theme << std::endl;
}
