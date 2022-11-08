#include<iostream>
using namespace std;

int func(int x, int n){
    if(n==0){
        return 1;
    }
    return x*func(x,n-1);
}
int main(){
    int n,x;
    cin>>x>>n;
    cout<<func(x,n);

    return 0;
}