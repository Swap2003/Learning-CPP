#include<iostream>
using namespace std;

int first7(int *a, int n){
//base case
if(n==0){
    return -1;
}
//recursive case
if(a[0] == 7){
    return 0;
}
int ans = first7(a+1, n-1);
if(ans == -1){
    return -1;
}
return ans +1;
}
int main(){
    int a[] = {1,2,3,7,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<first7(a,n)<<endl;
    return 0;
}

