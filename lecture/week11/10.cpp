#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    string s;
    string t;
    cin >> s >> t;
    //cout << t.find(s) << endl;
    //cout << string::npos << endl;
    if(t.find(s) != string::npos){
        cout << "found!";
    }else{
        cout << "not found";
    }
    return 0;
}