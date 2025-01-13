#include <iostream>
using namespace std;

int main(){
    float a = 3, b = 5, c = 1, d = 4, e = 7, f= 9;

    cout << (a/b) + 1 <<endl;
    cout << (a+b) / (c+d)<<endl;
    cout << (a+(b/c)) / (d+(e/f)) <<endl;
    cout << a + (b/(c-d))<<endl;
     cout <<(a+b) * c / d<<endl;
    return 0;
}