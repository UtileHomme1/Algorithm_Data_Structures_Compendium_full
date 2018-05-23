/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
Count the number of nodes
in the linked list
Node is defined as

*/

#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node* next;
};


int getCount(struct node* head){
//Code here
    if(head==NULL)
    {
        return 0;
    }

    int cnt = 0;
    while(head!=NULL)
    {
        head = head->next;
        cnt++;
    }

    return cnt;
}
