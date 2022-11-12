#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> v;

    int x;
    while(true){
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}