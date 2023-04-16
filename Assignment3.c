//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

int main()
{
  int i,n,binary=0,reverse=0,rem=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		binary=(binary*10)+n%2;
		n=n/2;
	 } 
	 while(binary>=1)
	 {
	 	rem=binary%10;
	 	reverse=(reverse*10)+rem;
	 	binary=binary/10;
	 }
	 printf("%d",reverse);
}
