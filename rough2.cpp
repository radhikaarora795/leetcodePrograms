#include <iostream>
#include <vector>
using namespace std;

bool isalpha(char ch){
        if((ch >= 'a' && ch <='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
}

int main() {
    vector<string> v={"B1 59","A3 56","A2 12"};
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    string s="a*bc#$def*";
    string result="";
    int length=s.size();
    int i=0;
    while(i<length){
        if(isalpha(s[i])){
            result=result+s[i];
            
        }
        else{
            while(!isalpha(s[i])){
                i++;
            }
        }
        
        i++;

    }

    
/*

    while(i<length){
        if(s[i] == '*' || s[i] == '#' || s[i] == '$'){
            i++;
        }
        else{
            result=result+s[i];
        }
        i++;
    }
*/
    cout<<result;

    return 0;
}