#include<bits/stdc++.h>
using namespace std;

int n;

void palindrome(int);

int main(){
    cin >> n;

    palindrome(n);

    system("PAUSE");
    return 0;
}

void palindrome(int n){
    int value = n;
    int rev = 0;

    while(n > 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if(value == rev){
        cout << "It is a palindrome\n";
    } else{
        cout << "It is not a palindrome\n";
    }
}