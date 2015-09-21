#include<iostream>
#include "Person.h"


Person::Person(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Person::~Person(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}

void Person::setName(char *name)
{
	this->Name = name;
}

void Person::setSurname(char *surname)
{
	this->Surname = surname;
}

void Person::setDateofBirthday(char *birthday)
{
	this->dateofBirthday =birthday;
}

void Person::getName()
{
	std::cout << this->Name << std::endl;
}

void Person::getDateofBirthday()
{
	std::cout << this->dateofBirthday << std::endl;
}

void Person::getSurname()
{
	std::cout << this->Surname << std::endl;
}
