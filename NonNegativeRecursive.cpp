#include<bits/stdc++.h>

using namespace std;

int nonNegativeCount(int arr[], int n){
    if(n==0) return 0;

    if(arr[n-1]>=0){
            return 1 + nonNegativeCount(arr, n-1);
    }else{
        return nonNegativeCount(arr, n-1);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int num = nonNegativeCount(arr, n);

    cout<<num<<" Non-Negative numbers in the array ";
    printArray(arr, n);

    return 0;
}
