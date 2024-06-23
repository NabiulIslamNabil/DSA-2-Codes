#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int digitCounter(int num){
    if(num == 0){
        return 0;
    }else{
        return 1 + digitCounter(num/10);
    }
}

int main(){

    int num;

    cout<<"Enter the number: ";
    cin>>num;

    int digits = digitCounter(num);

    cout<<digits<<" in the given number "<<num<<endl;
}
