#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Union();
void inter();
void difference();
void equality();
void main ()
{
    int choice =0;
    while(1)
    {
        printf("\n1.Union\n2.Intersection\n3.Difference\n4.Equality\n5.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
    {
         case 1:
         Union();
         break;
         case 2:
         inter();
         break;
         case 3:
         difference();
         break;
         case 4:
          equality();
          break;
         case 5:
         exit(0);
         default:
         printf("Please enter valid choice..");

    }
    }
}
void Union()
{

    int n1,n2,n,s1[20],s2[20],s[40],i;
    printf("Enter the number of elements:");
    scanf("%d", &n1);
    printf("Enter the elements:");
    for(i=0;i<n1;i++)
        scanf("%d", &s1[i]);
    printf("Enter the number of elements:");
    scanf("%d", &n2);
    printf("Enter the elements:");
    for(i=0;i<n2;i++)
        scanf("%d", &s2[i]);
    n=n1+n2;
    if(n1!=n2)
        printf("Two sets are not compatible for union.");
    else
    {
        for(i=0;i<n1;i++)
        {
            s[i]=s1[i] || s2[i];

        }
    }
    printf("\nThe Union is\n");
    for(i=0;i<n1;i++)
        printf("%d",s[i]);

}

void inter()
{
    int n1,n2,n,s1[20],s2[20],s[40],i;
    printf("Enter the number of elements:");
    scanf("%d", &n1);
    printf("Enter the elements:");
    for(i=0;i<n1;i++)
        scanf("%d", &s1[i]);
    printf("Enter the number of elements:");
    scanf("%d", &n2);
    printf("Enter the elements:");
    for(i=0;i<n2;i++)
        scanf("%d", &s2[i]);
    n=n1+n2;
    if(n1!=n2)
        printf("Two sets are not compatible for Intersection.");
    else
    {
        for(i=0;i<n1;i++)
        {
            s[i]=s1[i] && s2[i];

        }
    }
    printf("The intersection is\n");
    for(i=0;i<n1;i++)
        printf("%d",s[i]);
}

void difference()
{
    int n1,n2,n,s1[20],s2[20],s[40],i;
    printf("Enter the number of elements:");
    scanf("%d", &n1);
    printf("Enter the elements:");
    for(i=0;i<n1;i++)
        scanf("%d", &s1[i]);
    printf("Enter the number of elements:");
    scanf("%d", &n2);
    printf("Enter the elements:");
    for(i=0;i<n2;i++)
        scanf("%d", &s2[i]);
    n=n1+n2;
    if(n1!=n2)
        printf("Two sets are not compatible for difference.");
    else
    {
        for(i=0;i<n1;i++)
        {
            s2[i]=!s2[i];

        }
        for(i=0;i<n1;i++)
        {
            s[i]=s1[i] && s2[i];
        }
    }
    printf("The difference is\n");
    for(i=0;i<n1;i++)
        printf("%d",s[i]);
}

void equality()
{
    int n1,n2,n,s1[20],s2[20],s[40],i;
    printf("Enter the number of elements:");
    scanf("%d", &n1);
    printf("Enter the elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d", &s1[i]);
    }

    printf("Enter the number of elements:");
    scanf("%d", &n2);
    printf("Enter the elements:");
    for(i=0;i<n2;i++)
    {
         scanf("%d", &s2[i]);
    }

    n=n1+n2;
    if(n1!=n2)
        printf("Two sets are not compatible for Equality.");
    else
        for(i=0;i<n1;i++)
        {
        if(s1[i]!=s2[i])
        {
            printf("The sets are not equal");
            return 0;
        }
         printf("Sets are equal");
         return 0;

    }
}
