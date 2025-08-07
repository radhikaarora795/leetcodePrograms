#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    int canCompleteCircuit(vector<int>& gas,vector<int>& cost){
        int total_tank=0;
        int current=0;
        int start=0;

        for(int i=0;i<gas.size();i++){
            total_tank+=gas[i]-cost[i];
            current+=gas[i]-cost[i];

            if(current<0){
                start=i+1;
                current=0;
            }
        }
        return total_tank>=0 ? start:-1;
    }

    void sortColors(vector<int>& nums){
        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        for(int n:nums){
            cout<<n<<" ";
        }
    }

    int findPeakElement(vector<int>& nums){
        int beg=0;
        int end=nums.size()-1;

        while(beg<end){
            int mid=(beg+end)/2;

            if(nums[mid]<nums[mid+1]){
                beg=mid+1;
            }
            else{
                end=mid;
            }
        }
        return beg;
    }

    int climbStairs(int n){
        int n1=0;
        int n2=1;
        int n3=0;
        int count=0;

        while(count<n){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            count++;
        }
        return n3;
    }

};

int main() {
    //Solution s;
    // vector<int> gas={2,3,4};
    // vector<int> cost={3,4,3};
    //cout<<s.canCompleteCircuit(gas,cost);

    // vector<int> nums={1,2,1,3,6,5,6,6,4};
    // cout<<s.findPeakElement(nums);

    //cout<<s.climbStairs(3);

    return 0;
}

/*
reverse linked list:

node* reverseList(node *head){
    if(head == nullptr){
    return nullptr;
    }
    node *prev=nullptr;
    node *current=head;
    node *after=current->next;

    while(current != nullptr){
        after=current->next;
        current->next=prev;
        prev=current;
        current=after;
    }
    return prev;
}
*/