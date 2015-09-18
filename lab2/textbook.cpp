#include"textbook.h"
#include<iostream>



Textbook:: Textbook(void)
{
	std::cout << "Вызван конструктор по умолчанию" << std::endl;
}

Textbook:: ~Textbook(void)
{
	std::cout << "Вызван деструктор " << std::endl;
}

void Textbook::setForm(int form)
{
	this->form = form;
}

void Textbook::setSubject(char *subject)
{
	this->subject = subject;
}

int Textbook::getForm()
{
	return this->form;
}

void Textbook::getSubject()
{
	std::cout<<this->subject<<std::endl;
}