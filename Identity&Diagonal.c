#include<stdio.h>
#include<stdlib.h>
int main() {
int r1,c1,i,j;
printf("Enter the size of the matrix in the format rowXcoloumn \n");
scanf("%d%d",&r1,&c1);
if(r1!=c1){
  printf("Can not continue because the matrix is not a square matrix...");
}
else{
int **mat1=(int**)malloc(r1*sizeof(int*));
for(i=0;i<r1;i++) {
mat1[i]=(int*)malloc(c1*sizeof(int));
}
printf("Enter the elements in the matrix \n");
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++) {
 	scanf("%d",&mat1[i][j]);
}
}
printf("The entered matrix is : \n");
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++) {
printf("%d ",mat1[i][j]);
}
printf("\n");
} 
int flag=0;
for(i=0;i<r1;i++) {
for(j=0;j<c1;j++) {
 	if(i!=j && mat1[i][j]!=0) {
flag=1;
break;
}
else if(i==j&&mat1[i][j]==0) {
flag=1;
break;
}
}
}
if(flag==1)
printf("Given Matrix is not a diagonal Matrix. \n");
else
printf("Given Matrix is a diagonal Matrix.\n");
int flag1=0;
for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
if (i == j && mat1[i][j] != 1) {
flag1 = -1;
break;
}
else if (i != j && mat1[i][j] != 0) {
flag1 = -1;
break;
}
}
} 
if (flag1 == 0) {
printf ("It is a IDENTITY MATRIX\n");
}
else {
printf ("It is NOT an identity matrix\n");
} 
for(i=0;i<r1;i++) {
free(mat1[i]);
} 
free(mat1);
}
return 0;
}
