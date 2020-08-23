#include "User.h"
#include<iostream>
// User class methods definitions.

unsigned int User::UserCount = 0;      // Static declaration
// For creating new user his name and surname must be privided.
User::User(std::string Name,std::string SurName)
{
    this->Name      = Name;         // Set user name
    this->SurName   = SurName;      // Set user surname
    Age       = 0;  // Default value for user's age
    Gender    = 'D'; // Default gender
    UserCount++;
}

User::~User()
{
    //dtor
    UserCount--;
}
unsigned int User::GetUserCount()
{
    return UserCount;
}
void User::GetIntro()
{
    std::cout<<"I'm a User."<<std::endl;
}
// Change user gender if valid char is passed.
void User::SetGender(char Gender)
{
    // Add checkpoint for altering gender of user, only three possibilities are there.
    if(Gender == 'M' || Gender == 'F' || Gender == 'T')
    {
        this->Gender = Gender;    // Change gender to passed value which is of type char.
    }
}

// Read user gender, which is private member of class User.
char User::GetGender()
{
    return Gender;  // Return gender
}

// Set user's age
void User::SetAge(int Age)
{
    this->Age = Age;    // Set user's Age.
}
// Read user age.
int User::GetAge()
{
    return Age;     // Return user's Age.
}
// friend function can access class private members.
int GetAgeUsing_friendMethod(User u)
{
    return u.Age;     // Return user's Age.
}
//when we instantiate a Derived class object, the Base class portion has been created using the default Base constructor.
Teacher::Teacher(std::string Name,std::string SurName)
:User(Name,SurName)
{
// All that’s happening is that the Derived constructor is calling a specific Base constructor to initialize the
// Base portion of the object.
}
//Teacher::~Teacher()
//{
//
//}
// Update salary of teacher
void Teacher::UpdateSalary(double Salary)
{
    this->Salary = Salary;
}
double Teacher::GetSalary()
{
    return Salary;
}
void Teacher::GetIntro()
{
    std::cout<<"I'm a Teacher."<<std::endl;
}
//when we instantiate a Derived class object, the Base class portion has been created using the default Base constructor.
Student::Student(std::string Name,std::string SurName)
:User(Name,SurName)
{
// All that’s happening is that the Derived constructor is calling a specific Base constructor to initialize the
// Base portion of the object.
}
//Student::~Student()
//{
//
//}
// Update fees paid by student.
void Student::UpdateFeesPaid(double Fees)
{
    this->FeesPaid = Fees;
}
double Student::GetFeesPaid()
{
    return FeesPaid;
}
void Student::GetIntro()
{
    std::cout<<"I'm a Student."<<std::endl;
}
