#include <iostream>
using namespace std;

void rainwater(int *a, int n)
{
    int left[100];
    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], a[i]);
    }

    int right[100];
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(left[i], right[i]) - a[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rainwater(a, n);
    return 0;
}