//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

int main() 
{
  int a,i,n,count=0;
	a=8;
	while(a%8==0)
	{
		count++;
		printf("Enter a number: ");
		scanf("%d",&a);
	}
	printf("The number is not valid anymoreeeee");
	printf("\nCount of total valid inputs is: %d ",count-1);
  return 0;
}
