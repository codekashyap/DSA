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
    linkedlist *deletemid(linkedlist *head){
        auto sp=head,fp=head;
        auto pre=sp;
        while(fp != NULL and fp->next != NULL){
            pre=sp;
            sp=sp->next;
            fp=fp->next->next;
        }
        pre->next=sp->next;
        delete sp;
        return head;
    }
    linkedlist *delete_linked_list(linkedlist *head)
	{