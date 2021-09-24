#include<iostream>

using namespace std;

int main(){
    int sum = 0 , num, r , temp;
    cout<<"Enter a number to check numbers is palindrome or not : ";
    cin>>num;
    temp = num;
    while (num>0)
    {
        r = num%10;//12.1 , 1.2
        sum = (sum*10) + r;//12 , 121
        num /= 10;//12
    }

    if (temp == sum)
    {
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not a palindrome";

    }
    
    
    return 0;

}