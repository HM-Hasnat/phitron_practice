#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int std_id;
    int age;
    string Father_name;
    string Mother_name;

    /*constructor ekta function jar kono return type thake na,function ta peramitor nibe.*/

    Student(string name,int id ,int ag,string F_name ,string M_name)   //
    {
        this->name=name;  //2 ta name same hole ai vabe ullekh korte hoi
        std_id=id;
        age=ag;
        Father_name = F_name;
        Mother_name = M_name;
    }
    //constructor overload
    Student (string s,int id,int ag)   //joto gula dorkar call korbo baki gula korbo na. main fucntion call korte hole contructor thakte hobe
    {
        name=s;
        std_id=id;
        age=ag;
    }
//    Student s3()
//    {
//        // faka thakle probleam nai run korbe.
//    }
     void print_func()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<Father_name<<" "<<Mother_name<<"\n";
    }
    //destructor
    ~Student()
    {
        cout<<"called ";
        print_func();
    }
};
int main()
{
    Student s("A",20,10,"x" , "y");
    s.print_func();
    Student s2("R",20,30);
    s2.print_func();
}

