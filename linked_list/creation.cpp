/* 
Middle of a LinkedList
Delete middle of LL
Detect Loop & Remove loop from a LL
Reverse a LL
LinkedList is palindrome
Delete duplicates in sorted LL
Delete the whole LL
Separate even and odd nodes in a LL
The intersection point of two LL
Sort a LL 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

class linkedlist{
    public:
    ll data;
    linkedlist *next;
    linkedlist(){
        this->next=NULL;
    }
    linkedlist(ll data){
        this->data=data;
        this->next=NULL;
    }
    linkedlist *add(ll data, linkedlist *head){
        // case1:
        if(head == NULL){
            linkedlist *temp= new linkedlist(data);
            head=temp;
        }else{
            // CASE 2:
            linkedlist *temp=head;  //temporary pointer denote to head
            while(temp->next != NULL)     // traverse till end
            temp=temp->next;
            temp->next= new linkedlist(data);
        }
        return head;    
    }
    void print(linkedlist *head){
        auto temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next; 
        }
    }
};
int main(){
    linkedlist *hi = NULL;
    hi=hi->add(1,hi);
    hi=hi->add(2,hi);
    hi=hi->add(4,hi);
    hi=hi->add(8,hi);
    hi=hi->add(16,hi);

    hi->print(hi);
}
