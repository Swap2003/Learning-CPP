#include<iostream>
using namespace std;

string s[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "Eight", "Nine"
};
void intToString(int n){
    //base case
    if(n==0){
        return;
    }

    // recursive case
    int last_digit = n%10;
    cout<<s[last_digit]<<" ";

    intToString (n/10);
    
}
int main(){
int n = 2048;
intToString(n);

cout<<endl;
return 0;

}