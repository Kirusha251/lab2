#pragma once
#include"magazine.h"

class Textbook: 
	public Magazine
{
	int form;
	char *subject;
public:
	Textbook(void);
	void setForm(int form);
	void setSubject(char *subject);
	int getForm();
	void getSubject();
	~Textbook(void);
};