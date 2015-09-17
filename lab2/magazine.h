#pragma once


class Magazine
{
	char *name;
	char *theme;
	char *author;
	int numbersOfCopies;
	int numbersOfPages;
public:
	Magazine(void);
	~Magazine(void);
	void setName(char *name);
	void setTheme(char *theme);
	void setAuthor(char *author);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	int getName();
	int getTheme();
	int getAuthor();
	int getNumbersOfCopies();
	int getNumbersOfPages();

};