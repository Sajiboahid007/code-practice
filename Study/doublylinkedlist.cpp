#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    first->data = 2;
    second->data = 4;
    third->data = 5;
    fourth->data = 6;

    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = NULL;

    while (first != NULL) {
        cout << "Doubly Linked List: " << first->data << endl;
        first = first->next;
    }

    return 0;
}

