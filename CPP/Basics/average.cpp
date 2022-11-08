#include <iostream>
using namespace std;

int main() {
    int n, i;
    float avg = 0, y;
    
    cout << "Enter the number of elements to calculate the average::\n";
    cin >> n;
    
    cout << "Enter elements one by one";
    for(i = 0; i < n; i++) {
        cin >> y;
        avg += y;
    }

    avg /= n;
    cout << "\nThe average of the entered input numbers is = " << avg;
    return 0;
}