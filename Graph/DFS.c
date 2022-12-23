#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;
void pop(){
   top--;
}
void push(int n){
   stack[++top]=n;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else return 0;
}
int topele(){
    return stack[top];
}
void DFS(int adjmatrix[4][4]){
    int visited[4]={0};
    push(0);
    visited[0]=1;
    printf("0");
    while(!isEmpty()){
        int topvalue=topele();
        pop();
        for(int j=3;j>=0;j--){
           if(adjmatrix[topvalue][j]==1 && visited[j]==0){
            printf("%d",j);
            visited[j]=1;
            push(j);
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
    int a[4][4]={
        {0,1,0,1},{1,0,1,0},{0,1,0,0},{1,0,0,0}
    };
   DFS(a);
   return 0;
}