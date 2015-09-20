#include"print.h"
#include<iostream>

Print::Print(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Print::~Print(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}


void Print::setName(char *name)
{
	this->name = name;
}



void Print::setNumbersOfCopies(int num)
{
	this->numbersOfCopies = num;
}

void Print::setNumbersOfPages(int num)
{
	this->numbersOfPages = num;
}


void Print::getName()
{
	std::cout << this->name << std::endl;
}

int	Print::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Print::getNumbersOfPages()
{
	return this->numbersOfPages;
}