#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
    static unsigned int UserCount;
    /* Note: When function in defined in class declaration it considered as inline function,
             and all limitation of an inline function is applied to these functions.
             So the functions which has very few instructions should defined as inline.
             We can define constructor and destructor in class declaration if needed, further
             its programmers choice.
    */
    // User Class variables & methods declaration.
    public:
        User(std::string Name,std::string SurName);        // Constructor, will be called every time class is created.
        virtual ~User();// Destructor, will be called every time when class memory is deallocated.
        virtual void GetIntro();
        std::string Name;
        std::string SurName;

        // Access modifiers for changing private data
        void SetGender(char Gender);
        char GetGender();
        void SetAge(int Age);
        int GetAge();
        static unsigned int GetUserCount();
        friend int GetAgeUsing_friendMethod(User u);
    protected:
        // No protected member yet

    private:
        // Private variables will not be visible to other files, Data is abstracted from other functions.
        char Gender;   // Gender either 'M','F' or 'T' i.e. Male, Female, Transgender. Default for not set members.
        int Age;       // User's age
};
// Create class named Teacher derived form User class.
class Teacher : public User
{
    public:
    Teacher(std::string Name,std::string SurName);
    std::vector <std::string> TeachingSub;

    void UpdateSalary(double Salary);
    double GetSalary();
    void GetIntro();
    private:
    double Salary;  // Salary of teacher.
};
// Create class named Student derived form User class.
class Student : public User
{
    public:
    Student(std::string Name,std::string SurName);
    std::vector <std::string> SubChoosen;      // Subjects choosen by student for study.

    void UpdateFeesPaid(double Fees);
    double GetFeesPaid();
    void GetIntro();
    private:
    double FeesPaid;  // School fees paid by student.
};
#endif // USER_H
