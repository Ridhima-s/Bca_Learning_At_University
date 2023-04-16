//Input marks of 10 students in an array and then find the student with maximum marks
#include<stdio.h>
int main()
{
int student[10];
int i,max,temp;
for(i=0;i<10;i++)
	{
		printf("Enter marks of student %d ",i+1);
		scanf("%d",&student[i]);
	}
  max=student[0];
	for(i=0;i<10;i++)
	{
		if(max<student[i])
		{
			max=student[i];
      temp=i+1;
		}
	}
	printf("maximum score in classs is %d which is scored by student %d ",max,temp);
}
