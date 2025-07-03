#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int i=0;
        int j=i;
        int length=nums.size();

        while(j<length){
            int t1=nums[j];    
            while(j<length && nums[j]==t1){
                j++;
            }
            if(i<length && j<length){
                nums[++i]=nums[j];
                count++;
            }
        }

        cout<<"array"<<endl;
        for(int i=0;i<length;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;

        return count;

    }

};

int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<s.removeDuplicates(nums);

    return 0;
}