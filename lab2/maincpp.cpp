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
	cout << "--------------" << " Person " << "--------------" << endl;
	pers.setDateofBirthday("25 of January");
	cout << "Date of Birthday" << pers.getDateofBirthday() << endl;
	pers.setName("Кирилл");
	cout << "Name:" << pers.getName() << endl;
	pers.setSurname("Ахраменок");
	cout<<"Surname:"<<pers.getSurname()<<endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Author auth;
	cout << "--------------" << " Author " << "--------------" << endl;
	auth.setDateofBirthday("25 of January");
	cout<<"Date of Birthday"<<auth.getDateofBirthday()<<endl;
	auth.setName("Kirill");
	cout<<"Name:"<<auth.getName()<<endl;
	auth.setSurname("Ахраменок");
	cout<<"Surname:"<<auth.getSurname()<<endl;
	auth.setFirsBook("P90");
	cout << "The firs Book: "<<auth.getFirstBook()<<endl;
	auth.setNumbersOfBooks(5);
	cout << "The number of Books:"<< auth.getNumbersOfbooks()<<endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Publishing_Office publish;
	cout << "--------------" << " Publishing office " << "--------------" << endl;
	publish.setNameOfOffice("Versuta");
	publish.setOfficeAddress("DPT street, 21");
	publish.getNameOfOffice();
	publish.getOfficeAddress();
	cout << endl;
	cout << endl;
	cout << endl;
	Print pr;
	cout << "--------------" << " Printed edition " << "--------------" << endl;
	pr.setNameOfOffice("Versuta");
	pr.setOfficeAddress("DPT street, 21");
	cout<<"The name of office:"<<pr.getNameOfOffice()<<endl;
	cout<<"Office Address"<<pr.getOfficeAddress()<<endl;
	pr.setNameObj("Ball");
	cout << "The name of: Book/TexBook/Magazine" << pr.getNameObj() << endl;
	pr.setNumbersOfCopies(2134);
	cout << "The number of copies:" << pr.getNumbersOfCopies() << endl;
	pr.setNumbersOfPages(352);
	cout << "The number of pages:" << pr.getNumbersOfPages() << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Magazine mag;
	cout << "--------------" << " Magazine " << "--------------" << endl;
	cout << "The name of the publishing office:";
	mag.setNameOfOffice("Versuta");
	cout<<"The Name of office:"<<mag.getNameOfOffice()<<endl;
	mag.setOfficeAddress("DPT street, 21");
	cout<<"Office Address:"<<mag.getOfficeAddress()<<endl;
	mag.setNameObj("Ball");
	cout<<"Magazine title:"<<mag.getNameObj()<<endl;
	mag.setNumbersOfCopies(2134);
	cout << "The number of copies:" << mag.getNumbersOfCopies() << endl;
	mag.setNumbersOfPages(352);
	cout << "The number of pages:" << mag.getNumbersOfPages() << endl;
	mag.setTheme("Sport");
	cout << "Theme:" << mag.getTheme() << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Book bookObj;
	cout << "--------------" << " Book " << "--------------" << endl;
	bookObj.setNameObj("P90");
	cout<< "Book name:" << bookObj.getNameObj() << endl;
	bookObj.setGenre("Comedy");
	cout << "Book genre:" << bookObj.getGenre() << endl;;
	bookObj.setAuth("Kirill", "Achramionok");
	cout << "Author Name:" << bookObj.getAuthName() << endl;;
	cout<<"Author Surname:"<<bookObj.getAuthSurname()<<endl;
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
*/
	system("pause");
		return 0;
}