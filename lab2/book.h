#pragma once
#include "magazine.h"



class Book :
	public Magazine
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