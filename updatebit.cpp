#include<bits/stdc++.h>
using namespace std;

int updatebit(int n, int pos, int value){
    n = n & (~(1<<pos));
    return (n | (value<<pos));
}

int main(){
    cout<<updatebit(5,1,1);
    return 0;
}