#include <stdio.h>

int main()
{
    int n,*p,i,h=0;

        printf("How many numbers u want: ");
        scanf("%d",&n);

        p=(int *)malloc(sizeof(int));

        for(i=0;i<n;i++)
        {
                printf("\nEnter Number %d: ",i+1);
                scanf("%d",p+i);
        }

        h=*p;
        for(i=1;i<n;i++)
        {
                if(*(p+i)>h)
                        h=*(p+i);
        }
        printf("\nThe Largest Number is %d \n",h);
        
        return 0;
}