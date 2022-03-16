#include<stdio.h>
typedef struct student
{
    int roll;
    char first_name[20];
    char last_name[20];
    float result;
}Student;
void main()
{
     Student a[5];
    int i,n;
    printf("How many students?\n");
    scanf("%d",&n);
    printf("Enter the information of all students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %s %f",&a[i].roll,a[i].first_name,a[i].last_name,&a[i].result);
    }
    for(i=0;i<n;i++)
    {
        printf("Roll: %d\tName: %s %s\tResult: %f\n",a[i].roll,a[i].first_name,a[i].last_name,a[i].result);
    }
}
