#include "Example.h"
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <array>
// Create customize namespace to reduce naming conflicts.
namespace Demo
{
    // Introduction to cpp data types and it's memory footprint
    void Cpp_DataTypes()
    {
     /*
        Integer Data types:
        char
        unsigned char
        int
        unsigned int
        long
        unsigned long
        long long
        unsigned long long
        ***************************
        floating data types:
        float
        double
        long double

        ************
        We can also use auto to declare variable in our code,but need to specify after assigning
        value to variable.
        e.g. auto x = 10U;  // Declare x as unsigned int
             auto y = 40.6F // float variable declaration using auto keyword.
     */

     // Make use of all above data types and find it's memory footprint using sizeof() method.

     char Mychar                = 'S';                  // store ASCII characters
     int Myint                  = 50;
     long LongVar               = 4939823;
     long long LongLongVar      = 74727823423934;
     float MyFloat              = 56.6;                 // accurate up to 6 digits
     double MyDouble            = 487582738.8869;       // accurate up to 12 digits
     long double MyLongDouble   = 7834834293849.843648; // accurate up to 16 digits

     std::cout<<"\nMyChar: "        <<Mychar        << "\t sizeof(char): "         << sizeof(char)         << " bytes";
     std::cout<<"\nMyint: "         <<Myint         << "\t sizeof(int): "          << sizeof(int)          << " bytes";
     std::cout<<"\nLongVar: "       <<LongVar       << "\t sizeof(long): "         << sizeof(long)         << " bytes";
     std::cout<<"\nLongLongVar: "   <<LongLongVar   << "\t sizeof(long long): "    << sizeof(long long)    << " bytes";
     std::cout<<"\nMyFloat: "       <<MyFloat       << "\t sizeof(float): "        << sizeof(float)        << " bytes";
     std::cout<<"\nMyDouble: "      <<MyDouble      << "\t sizeof(double): "       << sizeof(double)       << " bytes";
     std::cout<<"\nMyLongDouble: "  <<MyLongDouble  << "\t sizeof(long double): "  << sizeof(long double)  << " bytes";
    }
    // Prints operators used in cpp
    void Cpp_Operators()
    {
        /* Operators in cpp can be classified in following categories:
        1. Arithmetic operators: +;-:*;/;%
        2. Logical operators: &&; ||; ^; >; <; <=; >=;! etc
        3. Increment & Decrement operators: ++; --;
        4. Bitwise operators: & ; |; << ; >>
        */
        std::cout<<"\n1. Arithmetic operators-> + : Addition; -: Subtraction; *: Multiplication; /: Division; %: Modulus.";
        std::cout<<"\n2. Logical operators-> &&: AND; ||: OR; ^:XOR; >: greater_than;\
        <:less_than; >=: greater_than_equal; <=: less_than_equal; !: NOT.";
        std::cout<< "\n3. Increment: ++; Decrement operators: --.";
        std::cout<<"\n4. Bitwise operators-> &: Bitwise_AND; |: Bitwise_OR; <<: left_shift; >>: right_shift.";
    }

    // Standard string class and some of it's methods.
    void Cpp_Strings()
    {
        // Initialize string type using standard library

        std::string MyString("Hello there!");
        std::cout<<"\nMy string: "<<MyString<<std::endl;
        // str.length and str.size are same methods.
        std::cout<<"\nLength of string:"<<MyString.length()<<std::endl;
        MyString.push_back('S');
        std::cout<<MyString<<std::endl;
        MyString.append(3,'*');
        std::cout<<MyString<<std::endl;
        MyString.append("Sachin",0,6);
        std::cout<<MyString<<std::endl;

        // use of insert method
        MyString.insert(0,"Oh! ");
        std::cout<<MyString<<std::endl;

        // use of replace function
        MyString.replace(0,4,"----");
        std::cout<<MyString<<std::endl;
        std::cout<<"\nLength of string:"<<MyString.size()<<std::endl;
        // use of find method
        std::cout<<"find * in string: "<<MyString.find('*',0)<<std::endl;

    //    MyString.clear();       // Clear string data
    //    std::cout<<MyString;
    //    std::cout<<"\nData after clear. <<std::endl";

    }
    // Introduction to cpp arrays, statically allocated.
    void Cpp_Arrays()
    {
        // All operation on this array type is as in c language.
        int Array[10];  // declare array if int no.
        std::cout<<"\nEnter array elements";
        // Get array from user.
        for(int i =0; i<10;i++)
        {
            std::cin>> Array[i];
        }

        // print array on console
        std::cout<<"\nArray: ";
        for(int i =0; i<10;i++)
        {
            std::cout << Array[i] << "\t";
        }
    }
    // introduction to cpp vectors, same as arrays but dynamically allocated with some important methods.
    void Cpp_Vectors()
    {
        // declare vector of type integer.
        std::vector <int> Vector{25,54,5,55,56};
        std::cout<<"vector size: "<<Vector.size()<<std::endl;
        std::cout<<"Vector elements are: ";
        // print this vector value on console
        for(int i =0; i< (int)Vector.size();i++)
        {
            std::cout<<Vector[i]<<"\t";
        }
        Vector.push_back(100);
        Vector.push_back(101);
        Vector.push_back(102);
        // size gives currently accupied space in vector
        std::cout<<"vector size: "<<Vector.size()<<std::endl;

        // capacity gives space allocated to vactor
        std::cout<<"vector capacity: "<<Vector.capacity()<<std::endl;
        // shrink vector size to desired value, deallocate extra space.
    //    Vector.shrink_to_fit();
    //    std::cout<<"vector capacity after shrink: "<<Vector.capacity()<<std::endl;
        // Insert 1 element at begining
        Vector.insert(Vector.begin(),4);
        Vector.insert(Vector.end(),4);

    //    Vector.erase(Vector.end()-1);
        // clear all vector values
    //    Vector.clear();

        // vector iterators
    //    std::vector<int>::iterator iter1;   // declaration of vector iterator
    //    iter1 = Vector.begin();
    //    Vector.erase(iter1);

        std::cout<<"Vector elements after insertion are: ";
        // print this vector value on console using range based for loop
        for(auto i:Vector)      // you can use int also as vector is of type int.
        {
            std::cout<<i<<"\t";
        }
    }
    // Introduction to templatized arrays which are statically allocated but with some functionality of vectors.
    void Cpp_Templatize_Arrays()
    {
        // declare templatized array, these are statically allocated at compile time.
        std::array<int, 10> tArray ={2,3,2,6,7,8,5};    // array class here has size method.

        tArray[7] = 99;
        tArray[8] = 100;
        // print tArray
        std::cout<<"tArray  size: " << tArray.size()<<" elements: ";
        for(int i: tArray)      // range based for loop.
        {
            std::cout<<i<<"\t";
        }
        std::cout<<std::endl;
    }
    //******************************* Operator overloading *****************************

void Cpp_OperatorOverloading()
{
    // local class declaration for demo purpose of operator overloading.
    class Position
    {
        // here default values are given for demo only
        // x and y are co-ordinates of position
        public:
            int x = 10;
            int y = 20;
            // Overload + operator
            Position operator+ (Position RightPos)
            {
                Position NewPos;
                NewPos.x = x + RightPos.x;
                NewPos.y = y + RightPos.y;
                return NewPos;
            }
            // overload comparison operator.
            bool operator== (Position RightPos)
            {
                if(x == RightPos.x && y == RightPos.y)
                {
                    return true;
                }
                return false;
            }
    };
    Position pos1,pos2;     // Define two positions.
    Position pos3 = pos1 + pos2;    // Overload operator to teach the compiler how to add two Positions.
    std::cout<<"x: "<<pos3.x<<" y: "<<pos3.y<<std::endl;
    if(pos1 == pos3)
    {
        std::cout<<"Same positions"<<std::endl;
    }
    else
    {
        std::cout<<"Different positions"<<std::endl;
    }
}
//******************************* Operator overloading *****************************
}
