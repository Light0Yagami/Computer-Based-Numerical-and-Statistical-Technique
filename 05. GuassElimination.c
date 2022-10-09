#include<stdio.h>
#include<stdlib.h>

void touppert(float a[20][20],int n){
 for(int i = 0; i < n; i++){
     for(int j = 0; j < n; j++){
         if(j > i){
             double c = a[j][i]/a[i][i];
             for(int k = 0; k < n+1; k++){
                 a[j][k] = a[j][k] - ( c * a[i][k]);
             }
         }
     }
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
  
  touppert(mat,n);
  print(mat,n);
  
 float x[n];
 
  // Backward Substitution
  
 x[n-1] = mat[n-1][n]/mat[n-1][n-1]; 

    for(i = n -2; i >= 0; i--){
        int sum = 0;
        for(j = i +1; j < n; j++){
            sum = sum + mat[i][j] * x[j];
        }
        x[i] = (mat[i][n] - sum)/mat[i][i];
    }
    
    for(int i = 0; i < n; i++){
        printf("%d : %f\n",i,x[i]);
    }
  

  return 0;
}
