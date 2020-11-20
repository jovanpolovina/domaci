#include <stdio.h>
#include <stdlib.h>


struct node{
int a;
struct Node* next;
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
int velicinaListe(Node* lista){
    int brojac = 0;
while(lista!=NULL){
    ++brojac;
    lista = lista->next;
}
return brojac;
}
void izbrisiListu(Node** lista){
while(*lista!= NULL){
    Node* help = *lista;
    *lista = (*lista)->next;
    free(help);
}
}
Node* okreniListu(Node** lista){
Node* okreni = NULL;
while(*lista != NULL){
    dodajElement((*lista)->a, &okreni);
    *lista = (*lista)->next;
}
izbrisiListu(lista);
return okreni;
}
void ispisiListu(Node* lista){
while(lista!=NULL){
        printf("%i->", lista->a);
    lista = lista->next;
}
}
int main()
{
  Node* head = NULL;
dodajElement(1, &head);
dodajElement(2, &head);
dodajElement(3, &head);
dodajElement(4, &head);
dodajElement(5, &head);
printf("Velicina liste je: %i", velicinaListe(head));
printf("Lista pre okretanja:\n");
ispisiListu(head);
printf("\n");
head = okreniListu(&head);
printf("Lista posle okretanja:\n");
ispisiListu(head);
    return 0;
}
