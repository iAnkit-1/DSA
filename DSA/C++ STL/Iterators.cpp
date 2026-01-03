#include <stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator it = v.begin();
    while (it != v.end()) {
        cout << *it << " ";
        
        // (*it).first == it->first  (for pair or map)
        it++;
    }
    cout << endl;

    // difference b/w it++ vs it+1
    // it++ increments the iterator itself to point to the next element

    // it+1 returns a new iterator pointing to the next location without changing the original iterator

    // another way of iterating using auto keyword
    for(auto element : v) {
        cout << element << " ";
        // element is a copied value from the vector
    }   
    cout << endl;

    for(auto &element : v) {
        cout << element << " ";
        // element is a reference to the original value from the vector
    }   
    cout << endl;

    return 0;
}