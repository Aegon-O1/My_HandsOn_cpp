#ifndef EXAMPLE_H_INCLUDED
#define EXAMPLE_H_INCLUDED

// Create customize namespace to reduce naming conflicts.
namespace Demo
{
    // creating a namespace is super easy, we just have to add all functions
    // which we want to add to namespace.
    void Cpp_DataTypes();
    void Cpp_Operators();
    void Cpp_Strings();
    void Cpp_Arrays();
    void Cpp_Vectors();
    void Cpp_Templatize_Arrays();
    void Cpp_OperatorOverloading();
}
//****************
//class Person
//{
//private:
//    std::string m_name;
//    int m_age;
//
//public:
//    Person(const std::string& name = "", int age = 0)
//        : m_name{ name }, m_age{ age }
//    {
//    }
//
//    const std::string& getName() const { return m_name; }
//    int getAge() const { return m_age; }
//
//};
//// BaseballPlayer publicly inheriting Person
//class BaseballPlayer : public Person
//{
//private:
//    double m_battingAverage;
//    int m_homeRuns;
//
//public:
//    BaseballPlayer(const std::string& name = "", int age = 0,
//        double battingAverage = 0.0, int homeRuns = 0)
//        : Person{ name, age }, // call Person(const std::string&, int) to initialize these fields
//            m_battingAverage{ battingAverage }, m_homeRuns{ homeRuns }
//    {
//    }
//
//    double getBattingAverage() const { return m_battingAverage; }
//    int getHomeRuns() const { return m_homeRuns; }
//};
//**************
#endif // EXAMPLE_H_INCLUDED
