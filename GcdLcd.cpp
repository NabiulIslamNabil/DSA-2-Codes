#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int gcm(int x, int y){
    if(y==0) return x;
    else return gcm(y, x%y);
}

int lcm(int x, int y){
    int a = gcm(x, y);
    int result = abs(x*y)/a;
    return result;
}

int main(){

    int x;
    int y;

    cout<<"Enter the pair of positive integers for GCM: ";
    cin>>x;
    cin>>y;

    if(x>0 && y>0){
        int result = gcm(x, y);
        cout<<"The GCM of "<<x<<" and "<<y<<" is "<<result<<endl;
    }else{
        cout<<"Input integers should be both positive."<<endl;
        return 0;
    }

    cout<<"Enter the pair of positive integers for LCM: ";
    cin>>x;
    cin>>y;

    if(x>0 && y>0){
        int result = lcm(x, y);
        cout<<"The LCM of "<<x<<" and "<<y<<" is "<<result<<endl;
    }else{
        cout<<"Input integers should be both positive."<<endl;
        return 0;
    }
}
