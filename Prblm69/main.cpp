#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, m = 0;
    cout << "\n\n Print patern........:\n";
    cout << "-----------------------------------\n";
    cout << " Input number or rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            for (j = 1; j <= i; j++) {
                cout << m << "  ";
            }
            for (k = 1; k <= n - i; k++) {
                cout << k << "  ";
            }
        }
        else {
            for (k = i - 1; k >= 1; k--) {
                cout << k << "  ";
            }
            cout << m << "  ";
            for (j = 1; j <= n - i; j++) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

