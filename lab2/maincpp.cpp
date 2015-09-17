#include <iostream>
#include "author.h"
#include "book.h"
#include "magazine.h"
#include "Person.h"
#include "print.h"
#include "publishing_office.h"
#include "textbook.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	Magazine m;
	int num;
	cin >> num;
	m.setNumbersOfCopies(num);
	cout << "-----" << m.getNumbersOfCopies() << endl;
	system("pause");
		return 0;
}