#include<bits/stdc++.h>

using namespace std;

int findMaxValue(vector<int> &arr, int maxi, int index){

    if(index == arr.size()){
        return maxi; //base case
    }

    if(arr[index]>maxi){
        maxi = arr[index];
    }

    findMaxValue(arr, maxi, index+1);
}

int maxFinder(vector<vector<int>> &arr, int maxi, int index){
    if(index == arr.size()){
        return maxi; //base case
    }

    int m = findMaxValue(arr[index], arr[0][0], 0);

    if(m>maxi){
        maxi = m ;
    }

    maxFinder(arr, maxi, index + 1);
}

int main(){
    int row;
    int col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    vector<vector<int>> arr(row, vector<int>(col));

    cout<<"Enter the inputs: "<<endl;
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    int maxi = maxFinder(arr, arr[0][0], 0);
    cout<<"The maximum value of the 2d array is: "<<maxi;
}
