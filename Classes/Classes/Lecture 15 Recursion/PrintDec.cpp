#include <iostream>
using namespace std;
void printdec(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<" ";
    printdec(n-1);
}
void printinc(int n){
    if (n==0)
    {
        return;
    }
    printinc(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    printdec(n);
    cout<<endl;
    printinc(n);
    return 0;
} 