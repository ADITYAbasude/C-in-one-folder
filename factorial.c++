#include<iostream>

using namespace std;

int main(){
    int num , sum=1 ;
    cout<<"Enter a number : ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        sum = sum*i;
    }

    cout<<"The foactorial of "<<num << " is : "<<sum;   
    return 0;

}