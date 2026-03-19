#include "AddressBookSLL.h"
#include <iostream>
using std::string;

AddressBookSLL::AddressBookSLL() : m_head(nullptr)
{
	m_head = nullptr;
}

AddressBookSLL::~AddressBookSLL()
{
	PersonNode* current = m_head;

	while (current != nullptr)
	{
		PersonNode* next = current->m_next;
		delete current;
		current = next;
	}

	m_head = nullptr;
}

void AddressBookSLL::AddPerson(const string& name, int age)
{
	PersonNode* newNode = new PersonNode(name, age);

	if (m_head == nullptr)
	{
		m_head = newNode;
		return;
	}

	PersonNode* current = m_head;
	while (current->m_next != nullptr)
	{
		current = current->m_next;
	}

	current->m_next = newNode;
}

const PersonNode* AddressBookSLL::FindPerson(const string& name) const
{
	PersonNode* current = m_head;
	if (current != nullptr)
	{
		return current;
	}
	else
	{
		return nullptr;
	}
}

bool AddressBookSLL::DeletePerson(const string& name)
{
	PersonNode* currentNode = m_head->m_next;
	PersonNode* nextNode = currentNode->m_next;
	PersonNode* previousNode = m_head;

	if (currentNode == nullptr)
	{
		return false;
	}
	if (m_head->m_name == name)
	{
		PersonNode* toDelete = m_head;
		m_head = m_head->m_next;
		delete toDelete;
		return true;
	}
	while (currentNode != nullptr)
	{
		if (currentNode != nullptr)
		{
			previousNode->m_next = currentNode->m_next;
			delete currentNode;
			return true;
		}
		previousNode = currentNode;
		currentNode = currentNode->m_next;
	}
	return false; 

}

void AddressBookSLL::Print(ostream& os) const
{
	PersonNode* current = m_head;
	while (current != nullptr)
	{
		os << current->m_name << "(" << current->m_age << ")" << endl;
		current = current->m_next;
	}
}

void AddressBookSLL::Print() const
{
	Print(std::cout);
}