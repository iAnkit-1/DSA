#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;

    // p = {1, "Hello"}; // This line would also work
    p = make_pair(1, "Hello");
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair<int, int> arrPair[3];
    arrPair[0] = {1, 4};
    arrPair[1] = make_pair(2, 5);
    arrPair[2] = {3, 6};

    for (int i = 0; i < 3; i++) {
        cout << arrPair[i].first << " " << arrPair[i].second << endl;
    }
    
    return 0;
}