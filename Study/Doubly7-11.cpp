#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *preb;
    struct Node *next;
};
int main()
{
    struct Node* first=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    struct Node* fourth=NULL;
    struct Node* fifth=NULL;

    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    first->data=1;
    second->data=2;
    third->data=3;
    fourth->data=4;
    fifth->data=5;

    first->preb=NULL;
    first->next=second;
    second->preb=first;
    second->next=third;
    third->preb=second;
    third->next=fourth;
    fourth->preb=third;
    fourth->next=fifth;
    fifth->preb=fourth;
    fifth->next=NULL;
    while(first != NULL)
    {
        cout<<"Doubly link list: "<<first->data<<endl;
        first=first->next;
    }
}
