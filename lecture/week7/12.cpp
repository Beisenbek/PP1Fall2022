#include <iostream>

using namespace std;

int main(){
    
    string s;
    string t;

    cin >> s >> t;

    if(s.find(t) != string::npos){
        cout << "found!";
    }else{
        cout << "not found!";
    }

    return 0;
}
