#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int num, int rev){

    if(num==0) return rev;
    else{
        rev = rev*10 + num%10;
        return reverseNumber(num/10, rev);
    }
}

bool isPalindrome(int num){
    int result = reverseNumber(num, 0); //reverse is initialized to 0
    return num == result;
}

int main(){

    int num;

    cout<<"Enter the number: ";
    cin>>num;

    if(isPalindrome(num)){
        cout<<num<<" is a palindrome."<<endl;
    }else{
        cout<<num<<" is not a palindrome"<<endl;
    }

}
