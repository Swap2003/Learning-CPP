#include<iostream>
using namespace std;

int NStairsCase(int n){
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0;
    }
    return NStairsCase(n-1) + NStairsCase(n-2) + NStairsCase(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<NStairsCase(n)<<endl;

    return 0;
}