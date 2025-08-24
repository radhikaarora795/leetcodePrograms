class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int beg=0;
        int end=nums.size()-1;
        int mid;

        while(end>=beg){
            mid=(beg+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return beg;
    }
    /*
    If the target is not found in the list, the while loop will terminate when beg is greater than 
    end. At this point, beg will be the index where the target should be inserted to maintain the 
    sorted order. We return beg as the insertion point.
    */
};