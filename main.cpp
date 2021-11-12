#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, w;
    cout << "please input an odd number:";
    cin >> n;
    for (int j = 0; j < n; ++j) {
        if (j < n / 2) {
            w = n / 2 - j;
        } else {
            w = j - n / 2;
        }

        if (j != n / 2) {
            cout << setfill(' ') << setw(w) << ' ';
        }

        if (j < n / 2) {
            w = j * 2 + 1;
        } else {
            w = n - (j - n / 2) * 2;
        }
        cout << setfill('*') << setw(w) << '*';
        cout << endl;
    }
    return 0;
}