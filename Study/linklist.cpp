#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    first->data=2;
    second->data=4;
    third->data=5;
    fourth->data=6;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    while(first != NULL)
    {
        cout<<"Link list= "<<first->data<<endl;
        first=first->next;
    }

}
