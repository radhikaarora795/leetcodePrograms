#include <iostream>
using namespace std;

/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool isPowerOf2=false;
        if(n<=0){
            return false;
        }
        if((n & (n-1)) == 0){
            isPowerOf2=true;
        }
        return isPowerOf2;
    }
};*/


// better time
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return ((n & (n-1)) == 0);
    }
};

int main() {
    Solution s;
    cout<<s.isPowerOfTwo(128);
    
    return 0;
}