#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        string str;
        int count=0;
        while(n>0){
            str=to_string(n%2)+str;
            n=n/2;
        }
        for(char ch:str){
            if(ch == '1'){
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    cout<<s.hammingWeight(11);
    
    return 0;
}