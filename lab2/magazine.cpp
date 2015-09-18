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


void Magazine::setName(char *name)
{
	this->name = name;
}

void Magazine::setTheme(char *theme)
{
	this->theme = theme;
}

void Magazine::setNumbersOfCopies(int num)
{
	this->numbersOfCopies = num;
}

void Magazine::setNumbersOfPages(int num)
{
	this->numbersOfPages = num;
}


void Magazine::getName()
{
	std::cout << this->name << std::endl;
}
void Magazine::getTheme()
{
	std::cout << this->theme << std::endl;
}

int Magazine::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Magazine::getNumbersOfPages()
{
	return this->numbersOfPages;
}