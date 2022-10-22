#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int u = 0;
    int l = 0;

    for(int i = 0; i < s.size(); ++i){
        if(islower(s[i])) l++;
        else if(isupper(s[i])) u++;
    }

    cout << u << " " << l;

    return 0;
}