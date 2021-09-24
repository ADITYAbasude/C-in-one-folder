#include<iostream>

using namespace std;

int add(int a , int b){
    int c = a*b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"Enter a number 1 for addition : ";
    cin>>num1;
    cout<<"Enter a number 2 for addition : ";
    cin>>num2;

    cout<< add(num1,num2);
    return 0;

}