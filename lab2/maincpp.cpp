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
	cout << "--------------" << " ������� " << "--------------" << endl;
	pers.setDateofBirthday("25 ������");
	pers.getDateofBirthday();
	pers.setName("������");
	pers.getName();
	pers.setSurname("���������");
	pers.getSurname();
	cout << endl;
	cout << endl;
	cout << endl;
	Author auth;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " ����� " << "--------------" << endl;
	auth.setDateofBirthday("25 ������");
	auth.getDateofBirthday();
	auth.setName("������");
	auth.getName();
	auth.setSurname("���������");
	auth.getSurname();
	auth.setFirsBook("P90");
	cout << "������ �����: ";
	auth.getFirstBook();
	auth.setNumbersOfBooks(5);
	cout << "���������� ����:";
	auth.getNumbersOfbooks();
	cout << endl;
	cout << endl;
	cout << endl;
	Publishing_Office publish;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " ������������ " << "--------------" << endl;
	publish.setNameOfOffice("Versuta");
	publish.setOfficeAddress("�����������, 21");
	publish.getNameOfOffice();
	publish.getOfficeAddress();
	Print pr;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " �������� ������� " << "--------------" << endl;
	pr.setNameOfOffice("Versuta");
	pr.setOfficeAddress("�����������, 21");
	pr.getNameOfOffice();
	pr.getOfficeAddress();
	cout << "�������� �����/�������/��������:";
	pr.setNameObj("���");
	pr.getNameObj();
	pr.setNumbersOfCopies(2134);
	cout << "����������� �����:" << pr.getNumbersOfCopies() << endl;
	pr.setNumbersOfPages(352);
	cout << "����������� �������:" << pr.getNumbersOfPages() << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	Magazine mag;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "--------------" << " ������ " << "--------------" << endl;
	cout << "�������� ������������:";
	mag.setNameOfOffice("Versuta");
	mag.setOfficeAddress("�����������, 21");
	mag.getNameOfOffice();
	mag.getOfficeAddress();
	cout << "�������� �������:";
	mag.setNameObj("���");
	mag.getNameObj();
	mag.setNumbersOfCopies(2134);
	cout << "����������� �����:" << mag.getNumbersOfCopies() << endl;
	mag.setNumbersOfPages(352);
	cout << "����������� �������:" << mag.getNumbersOfPages() << endl;
	mag.setTheme("�����");
	cout << "����: ";
	mag.getTheme();
	mag.setDateofBirthday("25 ������");
	mag.getDateofBirthday();
	mag.setName("������");
	mag.getName();
	mag.setSurname("���������");
	mag.getSurname();
	mag.setFirsBook("P90");
	cout << "������ �����: ";
	mag.getFirstBook();
	mag.setNumbersOfBooks(5);
	cout << "���������� ����:";
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