#include <iostream>

using namespace std;


int main(){
    
    int n;
    int i = 0;
    cin >> n;
    while(true){
        i++;
        if(i > n) break;
        if(i % 2  == 0) continue;
        cout << i << " ";
    }    
    return 0;
}
