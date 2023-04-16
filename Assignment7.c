//Write a code find the length of a string and its reverse equivalent without using readymade c functions

int main()
{
  char name[50];
	int i,count=0;
	printf("enter a string: ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf(" lenght of the string is %d ",count);
	printf("\nthe reverse of name is : ");
	for(i=count;i>=0;i--)
	{
		printf("%c",name[i]);
	}
}
