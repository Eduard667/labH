#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "AddressBookSLL.h";

int main(int argc, char **argv) {

	AddressBookSLL book;
	book.AddPerson("Darren", 21);
	book.AddPerson("Dawn", 42);
	book.AddPerson("Steven", 18);
	book.AddPerson("Sue", 27);
	book.AddPerson("Eduard", 19);

	std::ofstream file("output.txt");
	book.Print(file);
	book.Print();
	book.FindPerson("Eduard");
	book.DeletePerson("Dawn");
	system("PAUSE");
}

