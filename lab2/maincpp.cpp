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
	Person pers;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " Персона " << "--------------" << endl;
	pers.setDateofBirthday("25 января");
	pers.getDateofBirthday();
	pers.setName("Кирилл");
	pers.getName();
	pers.setSurname("Ахраменок");
	pers.getSurname();
	cout << endl;
	cout << endl;
	cout << endl;
	Author auth;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " Автор " << "--------------" << endl;
	auth.setDateofBirthday("25 января");
	auth.getDateofBirthday();
	auth.setName("Кирилл");
	auth.getName();
	auth.setSurname("Ахраменок");
	auth.getSurname();
	auth.setFirsBook("P90");
	cout << "Первая книга: ";
	auth.getFirstBook();
	auth.setNumbersOfBooks(5);
	cout << "Количество книг:";
	auth.getNumbersOfbooks();
	cout << endl;
	cout << endl;
	cout << endl;
	Publishing_Office publish;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " Издательство " << "--------------" << endl;
	publish.setNameOfOffice("Versuta");
	publish.setOfficeAddress("Белорусская, 21");
	publish.getNameOfOffice();
	publish.getOfficeAddress();
	Print pr;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " Печатное Издание " << "--------------" << endl;
	pr.setNameOfOffice("Versuta");
	pr.setOfficeAddress("Белорусская, 21");
	pr.getNameOfOffice();
	pr.getOfficeAddress();
	cout << "Название Книги/Журнала/Учебника:";
	pr.setNameObj("Мяч");
	pr.getNameObj();
	pr.setNumbersOfCopies(2134);
	cout << "Количествой копий:" << pr.getNumbersOfCopies() << endl;
	pr.setNumbersOfPages(352);
	cout << "Количествой страниц:" << pr.getNumbersOfPages() << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	Magazine mag;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " Журнал " << "--------------" << endl;
	cout << "Название Издательства:";
	mag.setNameOfOffice("Versuta");
	mag.setOfficeAddress("Белорусская, 21");
	mag.getNameOfOffice();
	mag.getOfficeAddress();
	cout << "Название журнала:";
	mag.setNameObj("Мяч");
	mag.getNameObj();
	mag.setNumbersOfCopies(2134);
	cout << "Количествой копий:" << mag.getNumbersOfCopies() << endl;
	mag.setNumbersOfPages(352);
	cout << "Количествой страниц:" << mag.getNumbersOfPages() << endl;
	mag.setTheme("Спорт");
	cout << "Тема: ";
	mag.getTheme();
	mag.setDateofBirthday("25 января");
	mag.getDateofBirthday();
	mag.setName("Кирилл");
	mag.getName();
	mag.setSurname("Ахраменок");
	mag.getSurname();
	mag.setFirsBook("P90");
	cout << "Первая книга: ";
	mag.getFirstBook();
	mag.setNumbersOfBooks(5);
	cout << "Количество книг:";
	mag.getNumbersOfbooks();
	/*cin >> num;
	m.setNumbersOfCopies(num);
	cout << "-----" << m.getNumbersOfCopies() << endl;
	Textbook s;
	s.setName("privet");
	s.getName();
	s.setNumbersOfCopies(2);
	cout << s.getNumbersOfCopies() << endl;
	Book b;
	b.setGenre("comedy");
	b.getGenre();
	b.setNumbersOfCopies(123);
	cout << b.getNumbersOfCopies() << endl;
	Print p;
	p.setNameOfOffice("rapapa");
	p.getNameOfOffice();
	system("pause");*/
		return 0;
}