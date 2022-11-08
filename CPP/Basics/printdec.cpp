#include <iostream>
using namespace std;

void printDec(int n)
{
// base case
    if (n == 0)
    {
        return;
    }
// recursive case
    cout << n << " ";
    printDec(n - 1);

}
int main()
{
    int n;
    cin >> n;

    printDec(n);
}

