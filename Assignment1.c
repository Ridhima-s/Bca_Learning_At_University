//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

int main()
{
  int i,a,tempeven=0,tempodd=0,n;
	printf("Enter the total numbers you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("Enter number %d : ",i+1);
	    scanf("%d",&a);
	    if(a%2==0)
	    {
	    	tempeven++;
		}
		else
		{
		tempodd++;
	    }
    }
    printf("\nTotal even numbers are %d",tempeven);
    printf("\nTotal odd numbers are %d",tempodd);
  return 0;
}
