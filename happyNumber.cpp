#include <iostream>
using namespace std;

/* use Floyd's cycle algorithm 
two pointers: slow=slow->next;
fast=fast->next->next (linked list)
*/

class Solution {
public:
    int sumSquares(int n){
        int sum=0;
        int x=0;

        while(n>0){
            x=n%10;
            sum+=x*x;
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n;
        int fast=sumSquares(n);
        // Loop until the fast pointer reaches 1 (happy) or both pointers meet (cycle)
        while(fast!=1 && fast!=slow){
            slow=sumSquares(slow);
            fast=sumSquares(sumSquares(fast));
        }
        if(fast == 1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    Solution s;
    cout<<s.isHappy(2);
    
    return 0;
}