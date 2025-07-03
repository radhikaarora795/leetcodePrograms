#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node():val(0),next(nullptr){}
    node(int x): val(x),next(nullptr){}
    node(int x,node *next): val(x),next(next){}
};

class Solution{
    public:
        node *merge(node *p1, node *p2){

            while(p1 != nullptr || p2 != nullptr){
                if(p1!=nullptr && p2!=nullptr){
                    if(p1->val <= p2->val){
                        node *p3=p1;
                        node *temp=p2;
                        p3->next=temp;
                    }
                }
            }
        }
}