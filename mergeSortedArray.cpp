#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }

        sort(nums1.begin(),nums1.end());

        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Solution s;
    vector<int> v1={0};
    vector<int> v2={1};
    s.merge(v1,0,v2,1);

    return 0;
}