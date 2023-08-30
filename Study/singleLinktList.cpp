#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int Data;
    struct Node *next;
};
int main()
{
    struct Node *head=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    head2=(struct Node*)malloc(sizeof(struct Node));
    head3=(struct Node*)malloc(sizeof(struct Node));
    head->Data=12;
    head2->Data=1003;
    head3->Data=134;

    head->next = head2;
    head2->next = head3;
    head3->next = NULL;

    while(head != NULL)
    {
        cout<<head->Data<<endl;
        head=head->next;
    }

}
