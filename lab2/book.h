#pragma once
#include "print.h"



class Book :
	public Print
{
	int numberOfparts;
	char *genre;
public:
	Book(void);
	~Book(void);
	void setNumbCop(int cop);
	void setGenre(char *genre);
	int getNumpCop();
	void getGenre();
};