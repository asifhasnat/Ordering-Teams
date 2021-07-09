#include <stdio.h>
int main() {
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
	    int a[3],b[3],c[3],count=0,temp=0;
	    for(i=0;i<3;i++)
	      scanf("%d %d %d",&a[i],&b[i],&c[i]);
	    for(i=0;i<3;i++)
     	{
	    for(j=i+1;j<3;j++)
	    {
	        if(a[i]>=a[j] &&b[i]>=b[j] && c[i]>=c[j] || a[i]<=a[j] &&b[i]<=b[j] && c[i]<=c[j] )
	       {
                if(((a[i]>a[j])||(b[i]>b[j])||(c[i]>c[j]))||((a[j]>a[i])||(b[j]>b[i])||(c[j]>c[i])))
                {
                    count++;
                }
                else
                {
                    temp=1;
                    break;
                }
            }
            else
            {
                temp=1;
                break;
            }
	    }
     	}
     	if(count>=2 && temp==0)
     	  printf("yes\n");
     	else
     	 printf("no\n");
	}
	return 0;
}
