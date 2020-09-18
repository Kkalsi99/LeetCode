#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     };
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* Head = new ListNode();
        ListNode* curr=Head;
         
        int carry=0;
        while(l1!=NULL||l2!=NULL){
           
           int x=(l1!=NULL)?l1->val:0;
            int y=(l2!=NULL)?l2->val:0;
            int sum=carry+x+y;
            carry=sum/10;
            
            
            if(l1!=NULL||l2!=NULL)
                {
               
                curr->next = new ListNode();
                 curr=curr->next;  
                 curr->val=sum%10;
               
                 } 
            if(l1!=NULL)
             l1=l1->next;
            if(l2!=NULL)
             l2=l2->next;
           
          
            
            
            }
        if(carry>0){
             curr->next = new ListNode();        
            curr=curr->next;
            curr->val=carry;
        }
        
        
        return Head->next;
        
    }
    int main(){
        ListNode *l1,*l2;
        addTwoNumbers(l1,l2);
    }