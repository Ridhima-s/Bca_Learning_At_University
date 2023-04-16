//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

int main()
{
  char name[50],temp;
	int i,j,count=0;
	printf("enter a string: ");
	scanf("%s",&name);	
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		if(name[i]>name[j])
		{
			temp=name[i];
			name[i]=name[j];
			name[j]=temp;
		}
	}
	printf("%s",name);
}
