#include <iostream>
#include <vector>
using namespace std;

void task1() {
    int n;
    cout << "enter N: "; cin >> n;
    vector<int> a(2 * n), b(2 * n);

    cout << "enter mas A: ";
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        b[i] = a[i + n];
    }
    for (int i = 0; i < n; i++) {
        b[i + n] = a[i];
    }

    for (int i = 0; i < 2 * n; i++) cout << b[i] << " ";
    cout << endl;
}

void task2() {
    int n;
    cout << "enter N: "; cin >> n;
    vector<int> a(n);

    cout << "enter mas A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int nulind = -1, min_val = 1000000, pos = -2;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            nulind = i;
            break;
        }
    }

    if (nulind != -1) {
        for (int i = nulind + 1; i < n; i++) {
            if (a[i] > 0 && a[i] < min_val) {
                min_val = a[i];
                pos = i;
            }
        }
    }

    cout << pos + 1 << endl;
}

void task3() {
    int n;
    cout << "enter N: "; cin >> n;
    int a[500];

    cout << "enter mas A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = -1, r = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < 0) {
            r = i;
            break;
        }
    }

    if (l != -1 && r != -1 && l < r) {
        int sum = 0;
        for (int i = l + 1; i < r; i++) sum += a[i];

        cout << "Range: " << l + 1 << " to " << r + 1 << endl;
        cout << "Sum: " << sum << endl;
    }
    else {
        cout << "Not enough negative elements." << endl;
    }
}

int main() {
    int command;
    cout << "Enter task number (1, 2, or 3): ";
    cin >> command;

    switch (command) {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    default:
        cout << "Invalid task number!" << endl;
    }

    return 0;
}