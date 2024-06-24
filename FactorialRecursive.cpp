#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n*factorial(n-1);
}

int main(){

    int n;

    cout<<"Enter the integer: ";
    cin>>n;

    int result = factorial(n);

    cout<<"Factorial of "<<n<<" is "<<result;

    return 0;

}
