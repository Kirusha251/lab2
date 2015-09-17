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

void Magazine::setAuthor(char *author)
{
	this->author = author;
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

int Magazine::getAuthor()
{
	return *this->author;
}

int Magazine::getName()
{
	return *this->name;
}

int Magazine::getTheme()
{
	return *this->theme;
}

int Magazine::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Magazine::getNumbersOfPages()
{
	return this->numbersOfPages;
}