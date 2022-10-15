#include <iostream>

using namespace std;

int main(){
    
    string s;
    string t;

    cin >> s >> t;

    size_t pos = s.find(t);

    cout << pos << endl;
    
    return 0;
}
