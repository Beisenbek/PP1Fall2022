#include <iostream>

using namespace std;


int main(){
    
    int n;
    int i = 1;
    cin >> n;
    while(true){
        if(i % 2 == 1){
            cout << i << " ";
        }
        i++;
        if(i > n) continue;
    }    
    return 0;
}
