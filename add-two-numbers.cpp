/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        long long int sum=0;
        long long int c=0;
            string s="";
        
        while(1)
        {
            if(curr1->next!=NULL||curr2->next!=NULL)
            {
              int v1,v2;
                v1=curr1->val?curr1->val:0;
                v2=curr2->val?curr2->val:0;
               // cout<<"if"<<v1<<v2<<c<<endl;
                sum=v1+v2+c;
                c=sum/10;
              s=s+to_string(sum%10);
                if(curr1->next!=NULL)
                    curr1=curr1->next;
                else
                   curr1->val=0; 
                if(curr2->next!=NULL)
                    curr2=curr2->next;
                else
                    curr2->val=0; 
            }
            else{
                 int v1,v2;
                v1=curr1->val?curr1->val:0;
                v2=curr2->val?curr2->val:0;
             //   cout<<"else"<<v1<<v2<<c<<endl;
                sum=v1+v2+c;
                c=sum/10;
                if(c==1){
                s=s+to_string(sum%10)+to_string(c);
                    cout<<"d";
                }
                else
                 s=s+to_string(sum%10);
                break;}
        }
      //  cout<<s<<endl;
        struct ListNode *fnNode, *tmp;
      
      
        char ss=s[0];
        struct ListNode *stnode =new ListNode();
        int r=ss-'0';
    
        int len=s.length();
      //  cout<<len;
        stnode->val=r;
        stnode->next=NULL;
        tmp=stnode;
        
        len=len-1;
        for(int i=1;i<=len;i++)
        {
            struct ListNode *fnNode = new ListNode();
             char sas=s[i];
              r=sas-'0';
              fnNode->val = r;     
              fnNode->next = NULL; 
              tmp->next = fnNode; 
              tmp = tmp->next; 
        //    cout<<r<<endl;
            
        }
        return stnode;
        
    }
};
