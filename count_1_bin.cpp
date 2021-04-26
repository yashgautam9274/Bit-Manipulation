// write a program to count the number of ones in binary represenation of a number
// n & n-1 --> no of ones in result is equal to (no of ones-1) in n

#include<bits/stdc++.h>
using namespace std;

int count1(int n){
       int count = 0;
       while(n!=0){
           n = n & (n-1);
           count++;
       }
       return count;
}

int main(){
    int n;cin>>n;
    cout<<count1(n);
}