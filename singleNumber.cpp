#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length=nums.size();
        int result=0;
        for(int i=0;i<length;i++){
            result=result^(nums[i]);
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> v={1};
    cout<<s.singleNumber(v);
    
    return 0;
}