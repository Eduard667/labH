#pragma once
#include <iostream>
#include <string>
using namespace std;

class AddressBookSLL;

class PersonNode
{
	friend class AddressBookSLL;
public:
	PersonNode();
	PersonNode(const string& name, int age);
	~PersonNode(void);

	//Getters - should always be const (read only) 
	string getName() const;
	int getAge() const; // const means - method promises not to modify the object. 

	// Setters
	void setName(const string& name);
	void setAge(int age);

	// Link to next node
	PersonNode* getNext() const; // get next node, of type PersonNode*, 
	 // set next node of same type.  



private:
	string m_name;
	int m_age;
	PersonNode* m_next;
	void setNext(PersonNode* next);
};
