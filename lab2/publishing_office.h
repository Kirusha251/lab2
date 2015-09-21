#pragma once 



class Publishing_Office
{
	char *NameOfOffice;
	char *OfficeAddress;
public:
	Publishing_Office(void);
	~Publishing_Office(void);
	void setNameOfOffice(char *name);
	void setOfficeAddress(char *Address);
	void getNameOfOffice();
	void getOfficeAddress();
};