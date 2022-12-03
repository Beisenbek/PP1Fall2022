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

    void readInfo(){
        cin >> name >> mname >> sname >> gpa;
    }
};

int main(){

    vector<student> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        student s;
        s.readInfo();
        v.push_back(s);
    }

    for(int i = 0; i < n; ++i){
        v[i].printFullInfo();
    }

    return 0;
}