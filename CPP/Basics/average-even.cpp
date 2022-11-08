#include <iostream>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"print sum of even numbers till"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
           sum += i;
        }
    }

    cout<<"Sum of even numbers from 1 to "<<n<<" is "<<sum<<endl;

    return 0;
}