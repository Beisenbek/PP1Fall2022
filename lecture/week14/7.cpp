#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string mname;
};

int main(){

    student s1;

    s1.name = "Bob";
    s1.mname = "Jr.";
    s1.sname = "John";
    s1.gpa = 2.4;

    return 0;
}