#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
int main()
{
    struct node* head=NULL;
    struct node* second=NULL;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data=4;
    second->data=4;

    head->next=second;
    second->next=NULL;

    while(head != NULL)
    {
        cout<<"Elements="<<head->data<<endl;
        head=head->next;
    }
}
