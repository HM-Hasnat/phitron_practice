#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int id;
    int age;
    string F_name;
    string M_name;

    void print_func()
    {
        cout<<name<<" "<<id<<" "<<age<<" "<<F_name<<" "<<M_name<<"\n";
    }
};

class Rectangle
{
public:
    int width,height;
    int claculate_area()
    {
        return height * width;
    }
    int calculate_perimeter()
    {
        return 2*(height+width);
    }

};
class Person
{
public:
    string name;
    Person *father,*mother;
    void print_info()
    {
        cout<<"Name = "<< name <<"\n";
        cout<<"Father name = "<<father->name<<"\n";
        cout<<"Mother name = "<<mother->name<<"\n";
    }


};

int main()
{
    Person p;
    p.father = new Person;
    p.mother = new Person ;
    p.name ="A";
    p.father->name ="B";
    p.mother->name = "c";
    p.print_info();


//    Rectangle r1;
//    r1.height = 4;
//    r1.width = 8;
//    cout<<r1.claculate_area()<<"\n";
//    cout<<r1.calculate_perimeter()<<"\n";
//    student s;
//    s.name="Rifat";
//    s.id = 2003740;
//    s.age = 25;
//    s.F_name ="Abdul Hamid";
//    s.M_name= "Forida Begum";
//    s.print_func();
//
//    student s2;
//    s2.name="suranjit";
//    s2.id = 2003742;
//    s2.age = 25;
//    s2.F_name ="x";
//    s2.M_name= "y";
//    s2.print_func();

}
