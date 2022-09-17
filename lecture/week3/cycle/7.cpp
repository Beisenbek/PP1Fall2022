#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    do{
        cout << n % 10 << " ";
        n = n / 10;
    }while(n > 0);

    return 0;
}