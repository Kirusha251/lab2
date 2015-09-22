#include"print.h"
#include<iostream>

Print::Print(void)
{
	std::cout << "Constructor is called Printed edition " << std::endl;
}

Print::~Print(void)
{
	std::cout << "Denstructor is called Printed edition" << std::endl;
}


void Print::setNameObj(char *name)
{
	this->nameObj = name;
}



void Print::setNumbersOfCopies(int num)
{
	this->numbersOfCopies = num;
}

void Print::setNumbersOfPages(int num)
{
	this->numbersOfPages = num;
}


char* Print::getNameObj()
{
	return this->nameObj;
}

int	Print::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Print::getNumbersOfPages()
{
	return this->numbersOfPages;
}