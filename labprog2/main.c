#include<stdio.h>
int rev(int n);
int main()
{
	int n , temp , y;
	printf("Enter the number : ");
	scanf("%d",&n);
	x=reverse(n);
	if(y==temp)
		printf("\n%d is pallindrome\nThe Pallindrome of %d is : %d",temp,y);
	else
		printf("\n%d is not a pallindrome",temp);
	return 0;
}

int reverse(n)
{
	int m,rev,rem;
	m=n;
	rev=0;
	while(n!=0)
	{
		rem=n%10;                   
		rev=rev*10+rem;             
		n/=10;
	}
	return rev;
}	
