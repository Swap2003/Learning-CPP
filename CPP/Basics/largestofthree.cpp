#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout<<"Three numbers are"<<endl;
    cin>>a>>b>>c;

    if (a>b && a>c)
    {
        cout<<"a is thr largest"<<endl;
    }

    else if (b>a && b>c)
    {
        cout<<"b is the largest"<<endl;
    }
    
    else{
        cout<<"c is the largest";
    }
    
    
    return 0;

}