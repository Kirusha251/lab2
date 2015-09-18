#pragma once


class Magazine
{
	char *name;
	char *theme;
	int numbersOfCopies;
	int numbersOfPages;
public:
	Magazine(void);
	~Magazine(void);
	void setName(char *name);
	void setTheme(char *theme);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	void getName();
	void getTheme();
	int getNumbersOfCopies();
	int getNumbersOfPages();

};