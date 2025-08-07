/*
In C++, unordered_set is an unordered associative container that stores unique elements. Unlike set, it stores its elements using hashing. This provides average constant-time O(1) search, insert, and delete operations but the elements are not sorted in any particular order.
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> set={1,1,2,3,3,2,4,5};

    /*
    New elements can be inserted into unordered set using insert() method. We cannot specify the position to insert the element as it is automatically decided by its hashed value.
    */
    auto it=set.insert(5);
    cout<<it.second<<endl;

    for(auto x:set){
        cout<<x<<" ";
    }

    // Accessing elements
    /* An unordered_set doesn't support direct indexing (like s[0]) because it doesn't store elements in any particular order.
    Instead, you access elements using iterators or range-based for loops.*/

    /*for(auto it=set.begin(); it != set.end(); it++){
        cout<<*it<<" ";
    }*/

    // updating elemnents
    /* In unordered set, the value of the elements cannot be changed after it is inserted.*/

    // find elements
    /* Unordered set provides fast search by value operation using the find() member function. This function returns iterator to the element if found, otherwise returns end() iterator. */

    /*auto it=set.find(7);

    if(it != set.end()){
        cout<<*it;
    }
    else{
        cout<<"not found";
    }*/

    // delete elements
    /* Elements can be removed from the unordered set using erase() method. We can erase elements either by value or by position.*/ 

    /*set.erase(6);

    for(auto x:set){
        cout<<x<<" ";
    }
    cout<<endl;

    set.erase(set.begin());
    for(auto x:set){
        cout<<x<<" ";
    }*/

    return 0;
}