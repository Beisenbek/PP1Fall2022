#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<pair<string, string > > v;

    int n;
    cin >> n;
    string str1, str2;

    for(int i = 0; i < n; ++i){
        cin >> str1 >> str2;
        v.push_back(make_pair(str1, str2));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }

    cout << endl;
    
    vector<pair<string, string > > :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
     
    return 0;
}