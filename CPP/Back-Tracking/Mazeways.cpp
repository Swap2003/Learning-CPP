#include<iostream>
using namespace std;

int mazeways(int n, int m){
    if (n==0 and m==0)
    {
       return 1;
    }
    if (n<0 || m<0)
    {
        return 0;
    }
    
    return mazeways(n-1, m) + mazeways(n, m-1);
}

int main(){
    int n = 3, m=3;
    cout<<mazeways(n,m)<<endl;

    return 0;
}