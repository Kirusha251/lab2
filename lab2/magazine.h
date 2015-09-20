#pragma once
#include "print.h"


class Magazine:
	public Print
{
	char *theme;
public:
	Magazine(void);
	~Magazine(void);
	void setTheme(char *theme);
	void getTheme();
};