#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    string name;
    int x;

    while(true){
        cin >> name;
        if(name == "end") break;
        cin >> x;
        m[name] += x;
    } 

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
    

    return 0;
}