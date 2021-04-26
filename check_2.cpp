#include<bits/stdc++.h>
using namespace std;

bool ispowerof2(int n){
    if((n & (n-1))==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;cin>>n;
    if(ispowerof2(n)){
        cout<<"Yes, "<<n<<" is a power of 2";
    }
    else{
        cout<<"N0";
    }
    return 0;
}