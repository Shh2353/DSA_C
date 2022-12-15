#include<stdio.h>
#include<stdlib.h>
int queue[100];
int front=-1;
int rear=-1;
void enqueue(int n){
    if(front==-1){
    queue[++front]=n;
    ++rear;
    }
    else{
     queue[++rear]=n;
    }
}
void dequeue(){
    rear--;
}
int isEmpty(){
    if(rear==-1)
    return 1;
    else return 0;
}
int frontele(){
    return queue[rear];
}
void BFS(int adjmatrix[7][7]){
    int visited[7]={0};
    int j=0;
    visited[j]=1;
    enqueue(j);
    printf("0");
    while(!isEmpty()){
      int node=frontele();
      dequeue();
      for(int i=0;i<7;i++){
        if(adjmatrix[node][i]==1 && visited[i]==0){
            printf("%d",i);
            visited[i]=1;
            enqueue(i);
        }
      }
    }
   
}
int main(){
    int adjmatrix[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
   BFS(adjmatrix);
   return 0;
}