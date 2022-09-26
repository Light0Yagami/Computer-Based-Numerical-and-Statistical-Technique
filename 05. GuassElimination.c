#include<stdio.h>
#include<stdlib.h>

void rowoperation(float mat[20][20],int i, int j, int n){
  for(j = i+1; j < n+1;  j++){
    mat[i][j] = mat[i][j] - (mat[i][j] * mat[0][j])/mat[0][j]; 
  }
}

void print(float mat[20][20], int n){
  printf("UpperTriangular Matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= n; j++){
      printf("%f  ",mat[i][j]);
    }
    printf("\n");
  }
  
}

int main(){
  
  float mat[20][20];
  
  int n,i,j;
  printf("\nEnter the size of matrix\n");
  scanf("%d",&n);
  
  matrix:
    printf("\nEnter the matrix\n");
    for(i= 0; i < n; i++){
      for(j = 0; j <= n; j++){
        scanf("%f",&mat[i][j]);
      }
    }
  
  if(mat[0][0] == 0){
    printf("1st element cannot be zero\n");
    printf("Again ");
    goto matrix;
  }
  
    
  for(i =0; i < n; i++){
    for(j = 0; j < n; j++){
      if(i > j && mat[i][j] != 0){
        rowoperation(mat,i,j,n); 
      }
    }
  }
  
  print(mat,n);
    

  

  return 0;
}
