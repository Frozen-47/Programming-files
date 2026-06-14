#include<stdio.h>
#include<stdio.h>
void magicsquare(int n){
    int x[n][n];

    int row=n/2;
    int col=n-1;
    int limit=n*n;
    int i,j;
    for(int num=1;num<=limit;){
        if (row==-1&&col==n){
            row=0;
            col=n-2;
        }
        else{
            if(row<0)
            row =n-1;
            if(col==n)
            col=0;
        }
        if(x[row][col])
        {
            row ++;
            col=col-2;
            continue;
        }
       else{
           x[row][col]=num;
           num++;
           
       } 
       row --;
       col ++;
    }
    printf("The Magic square \n");
    for (i=0;i<n;i++){
        for(j=0;j<n;j++)
        printf("%d\t",x[i][j]);
        printf("\n");
    }
    
}
int main(){
    int n;
    printf("Enter order of magic square :");
    scanf("%d",&n);
    if(n>3&&n%2!=0)
    magicsquare(n);
    else
    printf("n value not correct");
    return 0;
}


















