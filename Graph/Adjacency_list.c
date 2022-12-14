#include<stdio.h>
#include<stdlib.h>
struct Node{
    int vertexNum;
    struct Node*next;
};
struct List{
    struct Node *head;
};
struct List *adjlist[4]={0};
void addNode(int s,int d){
    struct Node *dest,*temp,*src;
    if(adjlist[s]->head==NULL){
        src=(struct Node*)malloc(sizeof(struct Node));
        src->vertexNum=s;
        src->next=NULL;
        adjlist[s]->head=src;
    }
    dest=(struct Node*)malloc(sizeof(struct Node));
    dest->vertexNum=d;
    dest->next=NULL;
    temp=adjlist[s]->head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=dest;
}
void printList(){
    for(int i=0;i<4;i++){
        struct Node*p=adjlist[i]->head;
        printf("Adjacency list for vertex %d ",i);
        while(p){
            printf("%d->",p->vertexNum);
            p=p->next;
        }
           printf("NULL");
           printf("\n");
    }
    printf("\n");
}
int main(){
    for(int i=0;i<4;i++){
        adjlist[i]=(struct List*)malloc(sizeof(struct List));
        adjlist[i]->head=NULL;
    }
    addNode(0,1);
    addNode(0,2);
    addNode(1,1);
    addNode(2,3);
    addNode(2,1);
    addNode(3,1);
    printList();
    return 0;
}
