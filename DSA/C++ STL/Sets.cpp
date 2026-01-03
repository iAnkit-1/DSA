#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> s; // stores unique elements in sorted order

    // unordered_set<string> s;
    // multiset<string> s; // allows duplicates

    s.insert("abc");
    s.insert("bcd");

    auto it = s.find("abc");

    s.erase(it);
    s.erase("bcd");


}