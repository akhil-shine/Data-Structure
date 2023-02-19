#include<stdio.h>
void insert();
void display();
int a[10],max=10,temp,index,c,p,i,r,t,l;
void main()
{
    int choice;
    while(1){
    printf("\n\n_______MENU________\n");
    printf("\n1.Insert\n2.DeleteMin\n3.Display\n4.Exit\n");
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        minHeapInsert();
        break;
    case 2:
        minHeapDelete();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid Option");
    }
    }}
void minHeapInsert()
{
    if(index>max){
        printf("Tree is full");
        return 0;
    }
     printf("\nEnter Element to insert:");
    scanf("%d",&a[index]);
    p=index/2;
    c=index;
    while(a[p]>a[c] && p!=0)
    {
       temp=a[p];
       a[p]=a[c];
       a[c]=temp;
       c=p;
       p=p/2;
    }
    index=index+1;
}
void minHeapDelete(){
  if(index==1){
      printf("Empty heap");
      return 0;
  }
  if(index==2)
  {
      index=1;
      return 0;
  }
  a[1]=a[index-1];
  index=index-1;
  p=1;
  l=p*2;
  r=(p*2)+1;
  while(a[p]>a[l] || a[p]>a[r] && (i<index))
  {
      if(r>=index)
      {
          t=r;
      }
      else if(a[r]>a[l])
      {
          t=l;
      }
      temp=a[t];
      a[t]=a[p];
      a[p]=temp;
      p=t;
      l=p*2;
      r=(p*2)+1;
  }
}
void display()
{
    if(index==1)
    {
        printf("Tree is empty");
        return 0;
    }
        for(i=1;i<index;i++)
        {
            printf("%d\t",a[i]);
        }
    }
