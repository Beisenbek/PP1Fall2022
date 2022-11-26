#include <iostream>
#include <set>

using namespace std;

int main(){

    set<string> s;

    int n;
    cin >> n;
    string str;

    for(int i = 0; i < n; ++i){
        cin >> str;
        s.insert(str);
    }

    set<string> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}