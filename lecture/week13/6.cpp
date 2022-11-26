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

    for(int i = 0; i < v.size() - 1; ++i){
        for(int j = i + 1; j < v.size(); ++j){
            if(v[i].second.size() > v[j].second.size()){
                swap(v[i], v[j]);
            }
        }
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }
     
    return 0;
}