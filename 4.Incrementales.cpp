#include <iostream>
using namespace std;

int main(){
    int x=3, y=3, z=3;
    x++;
    ++x;

    cout<<x<<endl;
    cout<<y++ * 3<<endl;
    cout<<y<<endl;
    cout<<++z * 3<<endl;
    cout<<z<<endl;
    return 0;
}