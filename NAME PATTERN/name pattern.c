#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter pattern rows:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1 || i==3 || i==5 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3){
                printf("* ");
            }
            else{
                printf("  ");
            }    
        }
        printf("  ");
        for(j=1; j<=n; j++){
            if(i==1 && j<2|| i==3 || i==5 && j<2 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf(" ");
        for(j=1; j<=n; j++){
            if(i==1 || i==3 || i==5 && j<2 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf(" ");
        for(j=1; j<=n; j++){
            if(i==5 && j==3 || i==4 && j==2 || i==4 && j==4  || i==3 && j==1 || i==3 && j==5 || i==2 && j==1 || i==2 && j==5 || i==1 && j==1 || 
            i==1 && j==5){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf(" ");
        for(j=1; j<=n; j++){
            if(i==1 || i==3 || i==5 && j<2 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf(" ");
        for(j=1; j<=n; j++){
            if(i==1 && j==0 || i==5 && j==0 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3
            || i==3 && j==1 || i==3 && j==5 || i==3 && j==3 || i==2 && j==2 || i==4 && j==4){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf(" ");
        for(j=1; j<=n; j++){
            if(i==1 || i==3 || i==5 && j<2 || j==1 && i<3 || j==5 && i>3 || j==5 && i<3 || j==1 && i>3){
                printf("* ");
            }
            else{
                printf("  ");
            } 
        } 
        printf("\n");
    }
    return 0;
}