#include <iostream>

using namespace std;

char f2(string s, int i, char best){
    if(i == s.size()) return best;
    return f2(s, i + 1, char(max(best, s[i])));
}

char f(string s){
    char best = s[0];
    for(size_t i = 1; i < s.size(); ++i){
        if(best < s[i]){
            best = s[i];
        }
    }
    return best;
}


int main(){

    string n;
    cin >> n;
    cout << f(n);
    cout << endl;
    cout << f2(n, 1, n[0]);

    return 0;
}