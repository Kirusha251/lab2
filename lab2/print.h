#pragma once


class Print
{
	char *name;
	int numbersOfCopies;
	int numbersOfPages;
public:
	Print(void);
	~Print(void);
	void setName(char *name);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	void getName();
	int getNumbersOfCopies();
	int getNumbersOfPages();

};