#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct circle{
    double r;
    circle(double _r){
        r = _r;
    }
    double getArea(){
        return M_PI * r * r;
    }
    circle operator+(circle other){
        return circle(this->r + other.r);
    }
};


int main(){

    circle c1(10);
    circle c2(30);

    circle c3 = c1 + c2; 

    cout << c3.getArea();

    return 0;
}