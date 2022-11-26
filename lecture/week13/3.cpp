#include <iostream>
#include <set>

using namespace std;

int main(){

    set<pair<string, string > > s;

    int n;
    cin >> n;
    string str1, str2;

    for(int i = 0; i < n; ++i){
        cin >> str1 >> str2;
        s.insert(make_pair(str1, str2));
    }

    set<pair<string, string > > :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << (*it).second << " " << (*it).first << endl;
    }

    return 0;
}