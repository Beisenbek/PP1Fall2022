#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int u = 0;
    int l = 0;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] <= 'Z' && s[i] >= 'A') u++;
        else if(s[i] <= 'z' && s[i] >= 'a') l++;
    }

    cout << u << " " << l;

    return 0;
}