# Explaining PersonNode

**AddressBookSLL** is a friend class of **PersonNode** class. 
  So that it can access private members. 

  Added Getters - getName() and setAge() - made them const (they do not modify the values)
  Added Setters - setName() and setAge()

### PersonNdoe.h

<img width="705" height="440" alt="Screenshot 2026-03-19 at 18 16 42" src="https://github.com/user-attachments/assets/e5096e68-d0d4-4745-be1d-5bc035d46b55" />

PersonNode.cpp implements the functionality of methods declared in PersonNode.h
### PersonNode.cpp

<img width="392" height="752" alt="Screenshot 2026-03-19 at 18 30 43" src="https://github.com/user-attachments/assets/2cf74560-7827-4c36-b4e5-72d9e7b4c5c3" />


# Explaining AddressBookSLL

This class initiates more functionality than **PersonNode** class. 
It defines: 
  - AddPerson() - Updates pointers, adds new node. 
  - FindPerson() - which is of type PersonNode*. 
  - DeletePerson() - boolean return type, updates pointers, removes users from address book
  - Print() (to ostream)
### AddressBookSLL.h
<img width="514" height="486" alt="Screenshot 2026-03-19 at 18 27 06" src="https://github.com/user-attachments/assets/083a4eef-b5ed-4c5d-b2a4-6c69b1a2b293" />

### AddressBookSLL.cpp
<img width="430" height="92" alt="Screenshot 2026-03-19 at 18 32 06" src="https://github.com/user-attachments/assets/e3f17044-23ab-4d63-b18a-b2ef6fad2585" />
This declares that **m_head** is the end of the linked list

<img width="384" height="304" alt="Screenshot 2026-03-19 at 18 33 01" src="https://github.com/user-attachments/assets/1130e9a8-d378-441e-b5b8-bb38f61551dc" />
Destructor has been modified from the original

<img width="607" height="712" alt="Screenshot 2026-03-19 at 18 33 53" src="https://github.com/user-attachments/assets/ca7eea6e-ec24-47fc-85b1-8a81aa086d40" />
Methods for AddPerson & FindPerson

### How AddPerson() works
We create a new instance of PersonNode (new element / person to add in the list).
If the list is empty, then m_head points to the newNode. 
If the list is not empty, We traverse to the element which has a **nullptr**, add element, update the pointers. 

### How FindPerson() works
Gets current node (m_head)
if list is not empty, return the current node
else return nullptr (list is empty. 

<img width="475" height="672" alt="Screenshot 2026-03-19 at 18 45 00" src="https://github.com/user-attachments/assets/fe50ec3c-4b9f-4694-97c2-b331b2b7d74a" />
Method to delete a person. 

<img width="602" height="321" alt="Screenshot 2026-03-19 at 18 47 02" src="https://github.com/user-attachments/assets/95d2b3c9-bb28-486e-9d0b-32346eeeabcf" />
Print method

### Main.cpp
<img width="282" height="443" alt="Screenshot 2026-03-19 at 18 48 37" src="https://github.com/user-attachments/assets/fd55aca8-9d5b-499d-b466-e7b2cd2ecdf2" />


