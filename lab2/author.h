#pragma once
#include "Person.h"

class Author:
	public Person
{
	int numbersOfBooks;
	char *firstbook;
public:
	Author(void);
	~Author(void);
	void setNumbersOfBooks(int num);
	void setFirsBook(char *first);
	int getNumbersOfbooks();
	char* getFirstBook();

};