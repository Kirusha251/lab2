#include "author.h"
#include <iostream>


Author::Author(void)
{
	std::cout << "������ ����������� �� ���������" << std::endl;
}

Author::~Author(void)
{
	std::cout << "������ ���������� " << std::endl;
}

void Author::setFirsBook(char *first)
{
	this->firstbook = first;
}

void Author::setNumbersOfBooks(int num)
{
	this->numbersOfBooks = num;
}

void Author::getFirstBook()
{
	std::cout <<this->firstbook << std::endl;
}

void Author::getNumbersOfbooks()
{
	std::cout << this->numbersOfBooks << std::endl;
}