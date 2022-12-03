#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string mname;

    void printFullInfo(){
        cout << name << " " << sname << " " << mname << " " << gpa << endl;
    }

    void printGPA(){
        cout <<  gpa << endl;
    }
};

int main(){

    vector<student> v;
    int n;
    cin >> n;


    for(int i = 0; i < n; ++i){
        student s;
        cin >> s.name >> s.mname >> s.sname >> s.gpa;
        v.push_back(s);
    }

    for(int i = 0; i < n; ++i){
        v[i].printGPA();
    }

    return 0;
}