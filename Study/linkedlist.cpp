#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *pre;
    struct Node *link;
};
int main()
{
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    second->data=14;
    third->data=100;

    head->pre=NULL;
    head->link=second;

    second->pre=head;
    second->link=third;

    third->pre=second;
    third->link=NULL;

    while(head != NULL)
    {
        cout<<"Doubly link list -> "<<head->data<<endl;
        head=head->link;
    }
}
