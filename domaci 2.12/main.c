#include <stdio.h>
#include <stdlib.h>



struct node{
int a;
struct node* next;
};
typedef struct node Node;
void dodajElement(int a, Node** head){
Node* novo = malloc(sizeof(Node));
novo->a = a;
if(head==NULL){
    *head = novo;
    (*head)->next = NULL;
}
novo->next = *head;
*head = novo;
}
void izbrisiElement(int a, Node** head){
if(*head==NULL){
    return;
}
if((*head)->a==a){
    Node* del = *head;
    *head = (*head)->next;
    free(del);
    return;
}
Node* prev = *head;
Node* del = (*head)->next;
while(del!=NULL && del->a!=a){
    if(del->next==NULL){
        printf("Element sa ovim brojem ne postoji u listi!\n");
        return;
    }


del = del->next;
prev = prev->next;
}
prev->next = del->next;
free(del);
}
void insertionSort(Node** head, int a)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->a=a;
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=newNode;
        (*head)->next=NULL;
        return;
    }
    if((*head)->a>=a)
    {
        newNode->next=*head;
        *head=newNode;
        return;
    }
    else
    {
       Node* start=*head;
        while(start->a<=a)
        {
              if(start->next==NULL)
            {
                newNode->next=NULL;
                start->next=newNode;
                return;
            }
            if(start->next->a>a){
                break;
            }
            start=start->next;
        }
        newNode->next=start->next;
        start->next=newNode;

    }
}
Node* Sortlist(Node* head){
Node* sortedList = NULL;
while(head!=NULL){
   insertionSort(&sortedList, head->a);
       head = head->next;
}

return sortedList;
}

void printList(Node* head){
while(head!=NULL){
    printf("%i->", head->a);
    head=head->next;
}
}

int main()
{
  Node* head = NULL;
  dodajElement(4, &head);
  dodajElement(2, &head);
  dodajElement(7, &head);
  dodajElement(3, &head);
  dodajElement(5, &head);
  dodajElement(20, &head);
  dodajElement(9, &head);
  dodajElement(1, &head);
  printf("Lista pre sortiranja: ");
  printList(head);
  printf("\n");
  head = Sortlist(head);
  printList(head);
  printf("\n");
izbrisiElement(20, &head);
izbrisiElement(1, &head);
izbrisiElement(4, &head);
printList(head);
    return 0;
}
