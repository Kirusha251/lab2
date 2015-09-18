#include "book.h"
#include<iostream>

Book::Book(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Book::~Book(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}



void Book::setGenre(char *gen)
{
	this->genre = gen;
}

void Book::setNumbCop(int cop)
{
	this->numberOfparts = cop;
}

int Book::getNumpCop()
{
	return this->numberOfparts;
}

void Book::getGenre()
{
	std::cout <<this->genre<< std::endl;
}


