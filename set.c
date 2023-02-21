#include <stdio.h>
#include <stdlib.h>
int a[20],b[20],c[20],x;
void set_union(int a[],int b[],int m)
{
    printf("After Union operation\n");
    for(int i=0;i<m;i++)
    {
        c[i]=a[i]||b[i];
        printf("%d\t",c[i]);
    }
}
void set_intersection(int a[],int b[],int m){
    printf("After intersection operation\n");
    for(int i=0;i<m;i++){
        c[i]=a[i]&&b[i];
        printf("%d\t",c[i]);
    }
}
void set_difference(int a[],int b[],int m){
    printf("After Difference operation\n");
    for(int i=0;i<m;i++){
        c[i]=!b[i]&&a[i];
        printf("%d\t",c[i]);
    }
}
void main()
{
int m,n,p;
printf("Enter the size of 1st set\n");
scanf("%d",&m);
printf("Enter the zeros and ones based on condition\n");
for(int i=0;i<m;i++)
{
    main:
    scanf("%d",&p);

    if (p==0 || p==1)
    {
        a[i]=p;
    }
    else
    {
        printf("Set only accept 0's and 1's please enter a valid number \n");
        goto main;
    }
}
printf("Enter the size of 2nd set\n");
scanf("%d",&n);
printf("Enter the zeros and ones based on condition\n");
for(int i=0;i<n;i++){
    main2:
    scanf("%d",&p);
    if (p==0 || p==1){
        b[i]=p;
    }
    else{
        printf("Set only accept 0's and 1's please enter a valid number  \n");
        goto main2;
    }
}
    printf("\n---------------------SET MENU-----------------------\n");
    printf("1. Union\t 2.Intersection\n3.Difference\t 0.exit");
while(1){
    printf("\n Enter your option below\n");
    scanf("%d",&x);
    switch(x){
    case 1: if(m==n)
                set_union(a,b,m);
            else
                printf("union perform only same size of array\n");
            break;
    case 2: if(m==n)
                set_intersection(a,b,m);
            else
                printf("intersection perform only same size of array\n");
            break;
    case 3: if(m==n)
set_difference(a,b,m);
            else
                printf("difference perform only same size of array\n");
            break;
    case 0:exit(1);
    default: printf("invalid option\n");
    }
}
}
