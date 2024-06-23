#include<bits/stdc++.h>

using namespace std;

int sumDigits(int num){
    if(num==0) return 0;
    else return (num%10) + sumDigits(num/10);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int result = sumDigits(num);

    cout<<"The sum of the digits of the input "<<num<<" is "<<result<<endl;
    return 0;
}
