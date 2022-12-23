#include <stdio.h>  
#define V 4
  
/* function to initialize the matrix to zero */  
void init(int arr[][V]) {  
  int i, j;  
  for (i = 0; i < V; i++)  
    for (j = 0; j < V; j++)  
      arr[i][j] = 0;  
}  
  
/* function to add edges to the graph */  
void insertEdge(int arr[][V], int i, int j) {  
  arr[i][j] = 1;  
  arr[j][i] = 1;  
}  
  
/* function to print the matrix elements */  
void printAdjMatrix(int arr[][V]) {  
  int i, j;  
  for (i = 0; i < V; i++) {  
    printf("%d: ", i);  
    for (j = 0; j < V; j++) {  
      printf("%d ", arr[i][j]);  
    }  
    printf("\n");  
  }  
}  
  
int main() {  
  int adjMatrix[V][V];  
  init(adjMatrix); 
  int edges;
  printf("Enter the no. of edges:\n");
  scanf("%d",&edges);
  for(int i=0;i<edges;i++){
      int v,e;
      printf("Enter the vertex:\n");
      scanf("%d",&v);
      printf("Enter the connected vertex:\n");
      scanf("%d",&e);
      insertEdge(adjMatrix, v, e);  
  }
  printAdjMatrix(adjMatrix);  
  
  return 0;  
}  