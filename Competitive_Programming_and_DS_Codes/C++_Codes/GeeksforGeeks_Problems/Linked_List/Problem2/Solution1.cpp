/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node */

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *temp = head;


    //if position give is the first place
    if(x==1)
    {
        head = temp->next;
        free(temp);
        return head;
    }

    //identifying the node previous to the node to be deleted
    for(int i=1;temp!=NULL && i<x-1;i++)
    {
        temp = temp->next;
    }

    //if the position given is more than the number of elements
    if(temp==NULL || temp->next==NULL)
    {
        return head;
    }

    Node *del = temp->next;

    temp->next = del->next;

    free(del);

    return head;
}
