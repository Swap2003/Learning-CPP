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

int Nstairs(int n, int k){
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }
    int ans = 0;
    
    for (int i = 0; i <= k; ++i)
    {
        ans += Nstairs(n-1, k);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<NStairsCase(n)<<endl;
    cout<<Nstairs(n,3)<<endl;

    return 0;
}