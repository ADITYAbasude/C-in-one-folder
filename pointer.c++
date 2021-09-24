#include<iostream>

using namespace std;

int main(){
    int a = 45;
    int *p = &a;
    cout<<*p<<"\n";
    cout<<p++;
    return 0;

}