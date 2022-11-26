#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(pair<string, string > p1, pair<string, string > p2){
    if(p1.second.size() < p2.second.size()) return true;
    return false;
}

int main(){

    vector<pair<string, string > > v;

    int n;
    cin >> n;
    string str1, str2;

    for(int i = 0; i < n; ++i){
        cin >> str1 >> str2;
        v.push_back(make_pair(str1, str2));
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }
     
    return 0;
}