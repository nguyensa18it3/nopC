#include<stdio.h>
#include<conio.h>
void nhapmang(int a[], int n) 
{
    int i;
    for (i = 1; i <= n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void inmang(int a[],int n)
{ for (int i=1;i<=n;i++)
printf(" a[%d]=%d",i,a[i]);
	
}

int Fact(int a[], int n,int s[])

{	for (int i = 1; i<=n; i++ )
	{ int k=1;
		for (int j = 1; j<=a[i]; j++)
        			{
				 k=k*j;
				s[i]=k;
	    		}
	}				

	}


int main()
{
	int n; int i, sum=0;
	printf("so phan tu: "); scanf("%d",&n);
	int a[n]; int s[n];
	nhapmang(a, n);
	inmang(a,n);
	Fact(a, n, s);
	
	for (i = 1; i<=n; i++)
	    sum=sum+s[i];printf("\nS= %d",sum);
	
}
