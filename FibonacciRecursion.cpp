#include<bits/stdc++.h>

using namespace std;

int fibonacci(int first, int last, int x){
    if(x == 0) return first;
    if(x == 1) return last;
    return fibonacci(last, first+last, x-1);
}

int main(){

    int x;

    cout<<"Enter the integer: ";
    cin>>x;

    cout<<"Assuming first and second Fibonacci numbers are 0 and 1."<<endl;
    int result = fibonacci(0, 1, x);

    cout<<"The "<<x<<"th fibonacci number is: "<<result<<endl;

    return 0;
}
