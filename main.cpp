/**
    @name   : main.cpp
    @brief  : Getting started with CPP.
    @auther : Sachin D Solanke
    @date   : 15/08/20
*/

/* Using directives:
     using namespace std;
     cout << "Hello world!<<endl";
*/
/* Using declaration of specific function of directive:
     using std::cout;           // This will be applicable for only cout function of std directive. also called 'using declaration'.
     cout << "Hello world!";    // <<endl; will not be part of this type of declaration as we only using single function not all sdt directive.
     endl is a part of sdt directive. if you want to use endl then use it as follows,
     cout << "Hello world!" << std::endl;
*/
/* Not using any namespace for function.
    std::cout << "Hello world!";  // <namespace>::<functin_name>
  we will carry this approach for our coding, in order to better comprehension.
  This will reduce naming conflicts.
*/
/* @Note: You can also use some c functions in cpp as,
   printf("\nYou have %d slices of Pizza.",i_Slices);   // This is strange but most of c functions also works in cpp.

   @Note:
   1. Use proper indentation while coding.
   2. cpp is case sensitive.
   3. Comments and white spaces are ignored by compiler.

*/

#include <iostream>     // Include standard library file for console I/O functions.
#include "include\User.h"
#include "include\Example.h"
// structures in cpp is similer to classes in cpp. by default all members of sructure are public.
// by default all members of class are private.
struct St_User
{
    std::string First_Name;
    std::string Last_Name;
    int Roll_No;
    double Percentage;
    private:
        std::string Gender;                     // Private variable in structure.
};

// User function declaration, which is to be used in main function.
double GetFactorial(int Value);

//swapping two arguments using templatize function
template <typename T>
void SwapTwo(T &a, T &b);
int main()
{
//--------------------------------Practice_01: Start ------------------------------------*/
//    // Output data on console using standard directive function
//    // cout is an object also cin is an oblect.
//    // cout is an instance of ostream and cin is an instance of istream.
//    // std::endl -> Write a newline and flush the stream.
//    // Writing ‘\n’ characters directly to the stream is more efficient since it doesn’t force a flush like std::endl.
    std::cout << "Hello world!"<<std::endl;      // Print string on console window.
//    int i_Slices = 5;                   // Declaration & Initialization. 'int' specifies data type of variable.
//    std::cout << "You have " << i_Slices << " slices of pizza. printed using 'std::cout'"; // Print variable value on output window.
//    // printf("\nYou have %d slices of Pizza. printed using 'printf()'",i_Slices); // This is strange but most of c functions also works in cpp.
//    // Avoid using printf function as it requires data type for printing data on screen, cout is very advance function than printf.
//--------------------------------Practice_01: End --------------------------------------*/

//--------------------------------Practice_02: Start ------------------------------------*/
//    // Taking inputs from user.
//    std::cout << "\nEnter the inter value to be printed:";    // ask user to enter some value.
//    int i_Value = 0;
//    std::cin >> i_Value;    // Get value form user using keyboard.
//    std::cout << "\nYou have Entered: " << i_Value; // print out entered value on console.

//--------------------------------Practice_02: End --------------------------------------*/

//--------------------------------Practice_03: Start ------------------------------------*/
//    // Using standard maths functions.
//    std::cout << "\nEnter the value whose factorial is to be calculated: ";
//    int Value = 0;
//    std::cin >> Value;
//    std::cout << "\nFactorial of " << Value << "is: " << GetFactorial(Value); // User defined function calling with 5 as argument.
//--------------------------------Practice_03: End --------------------------------------*/

//--------------------------------Practice_04: Start ------------------------------------*/
    // Data types, operators, strings arrays, vectors, templatize arrays in cpp
//        Demo::Cpp_DataTypes();
//        Demo::Cpp_Operators();
//        Demo::Cpp_Strings();  // Practice on cpp strings.
//        Demo::Cpp_Arrays();
//        Demo::Cpp_Vectors();
//        Demo::Cpp_Templatize_Arrays();
//--------------------------------Practice_04: End --------------------------------------*/

//--------------------------------Practice_05: Start ------------------------------------*/

//    // swap two numbers using templatize function.
//    std::string str1 = "Sachin";
//    std::string str2 = "Solanke";
//    std::cout<<"Strings before swap "<<str1<<"\t"<<str2<<std::endl;
//    SwapTwo(str1,str2);
//    std::cout<<"Strings after swap "<<str1<<"\t"<<str2<<std::endl;
//
//    int a = 23;
//    int b = 55;
//    std::cout<<"a & b before swap "<<a<<" "<<b<<std::endl;
//    SwapTwo(a,b);
//    std::cout<<"a & b After swap "<<a<<" "<<b<<std::endl;
//--------------------------------Practice_05: End --------------------------------------*/
//--------------------------------Practice_06: Start ------------------------------------*/

// Introduction to structures
//    std::vector<St_User> Collection_Class;         // Declare vector of type User.
//
//    St_User Student_01, Student_02, Student_03, Student_04 = {};
//    Student_01.First_Name   = "Sachin";
//    Student_01.Last_Name    = "Solanke";
//    Student_01.Roll_No      = 64;
//    Student_01.Percentage   = 93.36;
//
//    // Add the student to vector.
//    Collection_Class.push_back(Student_01);
//    Collection_Class.push_back(Student_02);
//    Collection_Class.push_back(Student_03);
//    Collection_Class.push_back(Student_04);
//
//    for(int i = 0; i < Collection_Class.size(); i++)
//    {
//       std::cout << Collection_Class[i].First_Name << " "<< Collection_Class[i].Last_Name<<std::endl;
//    }
//--------------------------------Practice_06: End --------------------------------------*/
//--------------------------------Practice_07: Start ------------------------------------*/
    // Introduction to Object Oriented Programming.
    // Create a class
    // Operator overloading
    // Demo::Cpp_OperatorOverloading();
    // Access modifiers, constructors, destructors, Data abstraction etc.

    User User1("Sachin","Solanke");
    User1.SetGender('M');
    User1.SetAge(25);
    std::cout<<User1.Name<<" "<<User1.SurName<<" Gender: "<<User1.GetGender()<< " Age: "<<User1.GetAge()<<std::endl;
    User1.GetIntro();
    std::cout<<"\nUserCount: "<<User1.GetUserCount()<<std::endl;
    // Friend method in class.
    std::cout<<"Using friend function we get UserAge: "<<GetAgeUsing_friendMethod(User1)<<std::endl;

//    // Inheritance
//    Teacher t1("Sachin","Patil");
//    t1.SetGender('M');
//    t1.SetAge(36);
//    t1.TeachingSub.push_back("Marathi");
//    t1.TeachingSub.push_back("Hindi");
//    t1.TeachingSub.push_back("English");
//    t1.UpdateSalary(65000.00);
//
//    std::cout<<t1.Name<<" "<<t1.SurName<<" Gender: "<<t1.GetGender()<< " Age: "<<t1.GetAge()<<std::endl;
//    t1.GetIntro();
//    std::cout<<"TeachingSub: ";
//    for(auto n:t1.TeachingSub)
//    {
//        std::cout<<n<<"\t";
//    }
//    std::cout<<"\nSalary: "<<t1.GetSalary()<<std::endl;
//    std::cout<<"\nUserCount: "<<t1.GetUserCount()<<std::endl;
//
//    Student s1("Asavari","Solanke");
//    s1.SetGender('F');
//    s1.SetAge(16);
//    s1.SubChoosen.push_back("English");
//    s1.SubChoosen.push_back("Science");
//    s1.SubChoosen.push_back("Maths");
//    s1.UpdateFeesPaid(15000.0);
//    std::cout<<s1.Name<<" "<<s1.SurName<<" Gender: "<<s1.GetGender()<< " Age: "<<s1.GetAge()<<std::endl;
//    s1.GetIntro();
//    std::cout<<"SubChoosen: ";
//    for(auto n:s1.SubChoosen)
//    {
//        std::cout<<n<<"\t";
//    }
//    std::cout<<"\nFeesPaid: "<<s1.GetFeesPaid()<<std::endl;
//    std::cout<<"\nUserCount: "<<s1.GetUserCount()<<std::endl;
//    // Polymorphism getting student as user.
//    User &u1 = s1;
//    std::cout<<u1.Name<<" "<<u1.SurName<<" Gender: "<<u1.GetGender()<< " Age: "<<u1.GetAge()<<std::endl;
//    u1.GetIntro();
//    std::cout<<"UserCount: "<<u1.GetUserCount()<<std::endl;
//
//    s1.~User();      // Delete user
//    std::cout<<"UserCount: "<<User::GetUserCount()<<std::endl;

/*
    //Copied code from web for reference for derived class constructors.
    BaseballPlayer pedro{ "Pedro Cerrano", 32, 0.342, 42 };
    std::cout << pedro.getName() << '\n';
    std::cout << pedro.getAge() << '\n';
    std::cout << pedro.getHomeRuns() << '\n';
*/
//--------------------------------Practice_07: End --------------------------------------*/


    return 0;
}

/** Function definition:
    @name   : double GetFactorial(int Value)
    @brief  : Calculate and return factorial of given number.
    @param  : int Value: value whose factorial is to be calculated.
    @return : double Fact: Factorial of argument passed to function.
    @date   : 16/08/20
*/
double GetFactorial(int Value)
{
    double Fact = 1;
    while(Value > 1)        // Calculate until value is greater than 1.
    {
        Fact *= Value--;    // Calculate factorial, multiplication, assignment and decrement in single line.
    }
    return Fact;
}

// Demo for function overloading & Templatize functions

//swapping two arguments using templatize function
/** Function definition:
    @name   : void SwapTwo(T &a, T &b)
    @brief  : swap two arguments of any type using templatize function.
    @param  : a & b : two quantities which has to be swapped.
    @date   : 18/08/20
*/
template <typename T>
void SwapTwo(T &a, T &b)
{
    T temp_var = a; // declare temporary variable of T type
    a = b;
    b =temp_var;
}
