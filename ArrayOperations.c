#include<stdio.h>
#include<stdlib.h>
int n;
void create(int a[10])
{
    int i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[10])
{
    int i;
    printf("The elements of the array are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void insert(int a[10],int ele,int pos)
{
    int i;
    for(i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=ele;
    n++;
}
int delete(int a[10],int pos)
{
    int ele,i;
    ele=a[pos-1];
    for(i=pos;i<n;i++)
    a[i-1]=a[i];
    n--;
    return ele;
 }
int main()
{
    int a[10],ele,pos,ch;
    while(1)
    {
        printf("\nEnter your choice:\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the no. of elements:\n");
                    scanf("%d",&n);
                    create(a);
                    break;
            case 2:display(a);
                    break;
            case 3:printf("Enter the element to be inserted\n");
                    scanf("%d",&ele);
                    printf("Enter the position\n");
                    scanf("%d",&pos);
                    insert(a,ele,pos);
                    break;
            case 4:printf("Enter the position from which the element has to be deleted\n");
                    scanf("%d",&pos);
                    ele=delete(a,pos);
                    printf("The deleted element is: %d\n",ele);
                    break;
             case 5:exit(0);
           }
      }
 }
                    
 
 
  
