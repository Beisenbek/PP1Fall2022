#include <iostream>

using namespace std;

int main(){

    string s;
    string t;
    cin >> s >> t;

    int cnt = 0;

    size_t pos = 0;

    while(true){
        pos = s.find(t, pos);
        if(pos == string :: npos){
            break;
        }else{
            cnt++;
        }
        pos++;
    }

    cout << cnt;

    return 0;
}