#include"magazine.h"
#include<iostream>

Magazine::Magazine(void)
{
	std::cout << "������ ����������� �� ���������" << std::endl;
}

Magazine::~Magazine(void)
{
	std::cout << "������ ���������� " << std::endl;
}


void Magazine::setTheme(char *theme)
{
	this->theme = theme;
}


void Magazine::getTheme()
{
	std::cout << this->theme << std::endl;
}
