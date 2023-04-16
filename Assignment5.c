//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

int main()
{
  int student[50];
	int i,fail=0,pass=0,max;
	for(i=0;i<50;i++)
	{
		printf("Enter marks of student %d ",i+1);
		scanf("%d",&student[i]);
	}
	for(i=0;i<50;i++)
	{
		if(student[i]<50)
		{
			fail++;
		}
		else
		    pass++;
	}
	max=student[0];
	for(i=0;i<50;i++)
	{
		if(max<student[i])
		{
			max=student[i];
		}
	}
	printf("maximum score in classs is %d \n",max);
	printf("total %d students failed\n",fail);
	printf("total %d students passed\n",pass);
}
