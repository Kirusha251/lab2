#include<iostream>
#include "Person.h"


Person::Person(void)
{
	std::cout << "������ ����������� �� ���������" << std::endl;
}

Person::~Person(void)
{
	std::cout << "������ ���������� " << std::endl;
}

void Person::setName(char *name)
{
	this->Name = name;
}

void Person::setSurname(char *surname)
{
	this->Surname = surname;
}

void Person::setDateofBirthday(char *birth)
{
	this->setDateofBirthday = birth;
}