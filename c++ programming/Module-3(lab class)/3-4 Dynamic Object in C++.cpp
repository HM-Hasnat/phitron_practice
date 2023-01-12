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
    //Dynamic object
    Student ( string name ,int std_id ,int age)
    {
        this->name=name;
        this->std_id =std_id;
        this->age = age;

    }
    void print_func()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<Father_name<<" "<<Mother_name<<"\n";
    }
};
int main()
{
    vector<
}
