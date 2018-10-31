// https: //www.interviewbit.com/tutorial/linked-list-implementation/#linked-list-implementation

// https: //www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *next; 
};

class Solution 
{
    public: 

    void printList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    Node * getIntersectionNode(Node *A, Node *B)
    {
        Node *pA = A; 
        Node * pB = B;

       while(A!=NULL)
       {
           //After 1st Address of A is compared with all addresses of B 
        //    B has to be brought to first address again
          pB = B;

           while(pB!=NULL)
           {
               if(A==pB)
               {
                   return A;
               }

               pB = pB->next;
           }

           A = A->next;
       }

    return NULL;
    }
};


int main()
{
    Solution s; 

    Node *newNode = new Node;
    Node *A = new Node; 

    Node *B = new Node;

    //The intersections points have the same address 
    // in both linked lists

    A->data = 10;
    B->data = 3;

    Node *newnode = new Node;
    newnode->data = 6;
    B->next = newnode;

    Node *newnode1 = new Node;
    newnode1->data = 9;
    B->next->next = newnode1;

    Node *newnode2 = new Node;
    newnode2->data = 15; 
    A->next = newnode2; 
    B->next->next->next = newnode2;

    Node *newnode3 = new Node;
    newnode3->data = 30;
    A->next->next  = newnode3; 
    A->next->next->next = NULL;

    s.printList(A);

    cout<<endl;
    s.printList(B);

    Node * C = s.getIntersectionNode(A,B);

    
    
    cout<<endl;
    s.printList(C);

    return 0;
}