#include <iostream>
#include <set>


using namespace std;

int main(){

    set<int> v;

    int x;
    while(true){
        cin >> x;
        if(x == 0) break;
        v.insert(x);
    }

    cout << v.size() << endl;

    set<int>::iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}