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

    set<string> :: reverse_iterator it;

    for(it = s.rbegin(); it != s.rend(); ++it){
        cout << *it << endl;
    }

    return 0;
}