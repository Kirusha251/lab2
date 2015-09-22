#pragma once
#include"publishing_office.h"

class Print:
	public Publishing_Office
{
	char *nameObj;
	int numbersOfCopies;
	int numbersOfPages;
public:
	Print(void);
	~Print(void);
	void setNameObj(char *name);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	char* getNameObj();
	int getNumbersOfCopies();
	int getNumbersOfPages();

};