#include<iostream>
#include"publishing_office.h"


Publishing_Office::Publishing_Office(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Publishing_Office::~Publishing_Office(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}

void Publishing_Office::setNameOfOffice(char *name)
{
	this->NameOfOffice = name;
}

void Publishing_Office::setOfficeAddress(char *address)
{
	this->OfficeAddress = address;
}

void Publishing_Office::getNameOfOffice()
{
	std::cout << this->NameOfOffice << std::endl;
}

void Publishing_Office::getOfficeAddress()
{
	std::cout << this->OfficeAddress<< std::endl;
}
