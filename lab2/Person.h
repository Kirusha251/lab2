#pragma once


class Person
{
	char *Name;
	char *Surname;
	char *dateofBirthday;
public :
	Person(void);
	~Person(void);
	void setName(char *name);
	void setSurname(char *surname);
	void setDateofBirthday(char *birth);
	char* getName();
	char* getSurname();
	char* getDateofBirthday();
};