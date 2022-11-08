#include <iostream>
using namespace std;

int main()
{

    int n, a, l;
    cout << "Enter no." << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value" << endl;
        cin >> a;

        if (i == 0 || a > l)
        {
            l = a;
        }
    }

    cout <<"largest value" << l << endl;
    return 0;
}