#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    pair<string, pair<string, double> > student;

    student.first = "Wick";
    student.second.first = "John";
    student.second.second = 3.5;

    cout << student.first << endl;
    cout << student.second.first << endl;
    cout << student.second.second << endl;

    return 0;
}