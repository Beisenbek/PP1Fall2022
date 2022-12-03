#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string mname;

    student(string name, string sname, double gpa, string mname){
        this->name = name;
        this->sname = sname;
        this->gpa = gpa;
        this->mname = mname;
    }

    void printFullInfo(){
        cout << name << " " << sname << " " << mname << " " << gpa << endl;
    }

    void printGPA(){
        cout <<  gpa << endl;
    }
};

bool f(student * s1, student * s2){
    if(s1->gpa > s2->gpa) return true;
    return false;
}

int main(){

    vector<student*> v;
    int n;
    cin >> n;

    string name;
    string sname;
    double gpa;
    string mname;

    for(int i = 0; i < n; ++i){
        cin >> name >> mname >> sname >> gpa;
        v.push_back(new student(name, sname, gpa, mname));
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < n; ++i){
        v[i]->printFullInfo();
    }

    return 0;
}