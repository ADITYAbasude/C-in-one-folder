#include<iostream>

using namespace std;

void master(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a , b;
    cout<<"Enter a 'a' value : ";
    cin>>a;
    cout<<"Enter a 'b' value : ";
    cin>>b;

    master(&a , &b);

    cout<<"Value of 'a' is : "<<a<<endl;
    cout<<"Value of 'b' is : "<<b;

    return 0;

}