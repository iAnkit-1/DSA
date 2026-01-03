#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[10];

    // blank vector
    // vector<int> ();

    vector<int> v;
    // vector<int> v(10, 1); // vector of size 10 initialized with 1s
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
        v.push_back(a[i]);
    }

    cout << "Elements in the vector are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    // other operations on vector
    cout << "\nVector size: " << v.size() << endl;
    v.pop_back();
    cout << "Vector size after pop_back: " << v.size() << endl;


    // Nested Vectors
    vector<vector<int>> vec;
    vector<pair<int, string>> vecPair;

    // Array of Vectors
    vector<int> vecArr[10];

    return 0;
}