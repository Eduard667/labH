#include "PersonNode.h"

PersonNode::PersonNode() : m_name(""), m_age(0), m_next(nullptr)
{
}

PersonNode::PersonNode(const string& name, int age) : m_name(name), m_age(age), m_next(nullptr)
{
}

PersonNode::~PersonNode(void)
{
}

string PersonNode::getName() const
{
    return m_name;
}


int PersonNode::getAge() const
{
    return m_age;
}



void PersonNode::setName(const string& name)
{
    m_name = name;
}

void PersonNode::setAge(int age)
{
    m_age = age;
}

PersonNode* PersonNode::getNext() const
{
    return m_next;
}

void PersonNode::setNext(PersonNode* next)
{
    m_next = next;
}
