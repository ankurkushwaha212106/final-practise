#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;

}
void insert(Node* &head, int x)
{
    Node* second = new Node;
    second->data = x;
    second->next = NULL;
    if(head == NULL)
    {
        head = second;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {

    }
}
int main()
{
 Node* head = NULL;

}