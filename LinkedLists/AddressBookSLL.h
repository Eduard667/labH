#pragma once
#include <string>
#include <ostream>
using std::string;
#include "PersonNode.h"

class AddressBookSLL
{
public:
	AddressBookSLL();
	~AddressBookSLL();
	void AddPerson(const string& name, int age);
	const PersonNode* FindPerson(const string& name) const;
	bool DeletePerson(const string& name);

	void Print(ostream& os) const;
	void Print() const;

private:
	PersonNode* m_head;
};
