ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* prev1=NULL;
            ListNode* curr1= l1;
            ListNode* next=NULL;

            while(curr!=NULL){

                next=curr1->next;
                curr1->next=prev1;
                prev1=curr1;
                curr1=next;

            }
            ListNode* prev2=NULL;
            ListNode* curr2= l2;
            ListNode* next=NULL;

            while(curr!=NULL){

                next=curr2->next;
                curr2->next=prev2;
                prev2=curr2;
                curr2=next;

            }



            int subtotal2=0;
            ListNode* temp2= l2;
            int i=0;
            while(temp2=!NULL){

                if(i==0){
                    subtotal2=+(temp2)*100;
                }
                if(i==1){
                    subtotal2=+(temp2)*10;
                }
                if(i==2){
                    subtotal2=+(temp2)*1;
                }

                i++;
                subtotal2=temp2->next;
            }
            


            int subtotal1=0;
            ListNode* temp= l1;
            int i=0;
            while(temp=!NULL){

                if(i==0){
                    subtotal1=+(temp)*100;
                }
                if(i==1){
                    subtotal1=+(temp)*10;
                }
                if(i==2){
                    subtotal1=+(temp)*1;
                }

                i++;
                subtotal1=temp->next;
            }
            

     return (subtotal1+subtotal2);

        

    
        

      




};