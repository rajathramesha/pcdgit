#include<stdio.h>
int horner(int a, int b,int c[]);
int main()
{
	int i,n,x,psum1,a[10],q=10;
	printf("Enter the degree of the polynomial ; ");
	scanf("%d",&n);
	printf("\nEnter the value of x in the polynomial : ");
	scanf("%d",&x);
	printf("\nEnter the elements of the polynomial ; ");
	for(i=0;i<=n;i++)         
		scanf("%d",&a[i]);
	psum1=horner(n,x,a);
	printf("%d",psum1);
	return 0;
}
int horner(int a, int b, int c[])	
{
	int i,sum=0,psum;
	for(i=a;i>0;i--)
		sum=(sum+c[i])*b;            //multiplying the co=efficient with vlue of x and adding the different terms
	psum=sum+c[0];
	return psum;
}
