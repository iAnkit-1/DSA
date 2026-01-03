#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m; // uses Red-Black Tree
    // unordered_map<string, int> m; // uses Hash Tables
    // unordered_map<<pair<int, int>, string> m;    // invalid data types

    // multimap<<pair<int, int>, string> m; // keys are not unique here and same key can be inserted multiple times

    m[1] = "abc";
    m[5] = "bcd";
    m[3] = "cde";

    m.insert({4, "def"});

    map<int, string> :: iterator it; 
    

    for(it=m.begin(); it!=m.end(); it++) {
        cout << (*it).first << " " << (*it).second;
    }

    for(auto &it : m) {
        cout << it.first << " " << it.second << endl;
    }

    // other operations
    m.find(3);
    m.erase(3);

    return 0;
}