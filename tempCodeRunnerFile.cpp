int removeDuplicates(vector<int>& nums){
            
            for(int i=0;i<nums.size();i++){
                int temp=nums[i];
                nums.erase(remove(nums.begin(),nums.end(),temp),nums.end());
            }
        }