#include<bits/stdc++.h>

using namespace std;

string processString(const string& str) {
    string s;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                s += str[i] + 32;
            } else {
                s += str[i];
            }
        }
        i++;
    }
    return s;
}

string reversed(string str, int index) {
    if (index < 0) {
        return "";
    }
    return str[index] + reversed(str, index - 1);
}

bool isPalindrome(string str){
    string s = reversed(str, str.length() - 1);
    //cout<<s<<endl;
    return s==str;
}

int main(){

    string str;

    cout<<"Enter the string: ";
    getline(cin, str);

    str = processString(str);
    //cout<<str<<endl;

    if(isPalindrome(str)){
        cout<<str<<" is a palindrome."<<endl;
    }else{
        cout<<str<<" is not a palindrome."<<endl;
    }

}
