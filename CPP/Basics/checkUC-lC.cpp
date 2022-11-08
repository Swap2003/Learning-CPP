#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
                        //for getting ascii code of character
    int b = ch;
    cout<<b<<endl;

    if (b>= 65 && b<=90)
    {
        cout<<"Upper case"<<endl;
    }
    else{
        cout<<"Lower case"<<endl;
    }
    
    return 0;
}
