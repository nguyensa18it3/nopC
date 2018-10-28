#include<stdio.h>
#include<conio.h>
double TienDien(int tt)
{double tien=0;
{
if (tt<50) tien=tt*1500;
else 
	 if(tt>=50&& tt<=100) tien =49*1500+(tt-49)*2000;
	 else tien= 49*1500+51*2000+(tt-100)*3000;
}
printf("tien dien phai tra la %lf ", tien);	 
}
int main(){int cu,moi,tt;
	printf("nhap so dien cu");
	scanf("%d",&cu);
	printf("nhap so dien moi");
	scanf("%d",&moi);
	tt=moi-cu;
	TienDien(tt);
	
}
