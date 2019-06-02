#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=0;
    int* kimenet=(int*)malloc(sizeof(int)*n);
    char c;
    int i;
    int j;
    while(!feof(stdin))
    {
        for(i=1;i<4;i++)
        {
            int j=3;
            while(j>=1)
            {
                scanf("%c",&c);
                if(c=='o')
                {
                    if(i==1)
                    {
                    n++;
                    kimenet=realloc(kimenet,n*sizeof(int));
                    kimenet[n-1]=3-j;
                    }
                    if(i==2)
                    {
                    n++;
                    kimenet=realloc(kimenet,n*sizeof(int));
                    kimenet[n-1]=3+3-j;
                    }
                    if(i==3)
                    {
                    n++;
                    kimenet=realloc(kimenet,n*sizeof(int));
                    kimenet[n-1]=6+3-j;
                    }
                }
                j--;
            }
        }
        printf("%d",n);
        for(i=0;i<n;i++)
        {
            printf("%d",kimenet[i]);
        }
        n=0;
        kimenet=realloc(kimenet,n*sizeof(int));
    }
    return 0;
}
