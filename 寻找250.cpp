#include<stdio.h>
#define N 100

int main()
{
    int a[N],i,k=0,t=0;
    for(i=0;i<=N;i++)
      {  scanf("%d",&a[i]);
         k++;
		 if(a[i]=='\n')  break;
      }
    for(i=0;i<k;i++)
    {
        if (a[i]!=250) t++;
        else break;
    }
    printf("%d\n",t+1);
    return 0;
}
