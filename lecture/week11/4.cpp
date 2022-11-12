#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x;
    cin >> x;
    
    printf("The next number for the number %i is %i.\n", x, x + 1);
    printf("The previous number for the number %i is %i.", x, x - 1);

    return 0;
}