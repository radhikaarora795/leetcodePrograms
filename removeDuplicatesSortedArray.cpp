/*
vector <int> nums = {0,0,1,1,1,2,2,3,3,4}
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int length=nums.size();
    int count=0;
    int i=0,j=0;
    int unique=nums[i];    
    
    while(i<length){
        nums[i]=unique;
        i++;
        while ( nums[j] == unique){
            i++;
        }
        count++;  
          
    }

    /*for(int j=0;j<count; j++){
        cout<< nums[j] <<" ";
    }
*/
    return count;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);

    return 0;
}