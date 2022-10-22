#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int u = 0;
    int l = 0;
    int d = 0;

    for(size_t i = 0; i < s.size(); ++i){
        if(islower(s[i])) l++;
        else if(isupper(s[i])) u++;
        else if(isdigit(s[i])) d++;
    }

    cout << u << " " << l << " " << d;

    return 0;
}