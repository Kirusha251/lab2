#pragma once
#include "print.h"
#include "author.h"


class Magazine:
	public Print,Author
{
	char *theme;
public:
	Magazine(void);
	~Magazine(void);
	void setTheme(char *theme);
	void getTheme();
};