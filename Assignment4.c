//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  int mat[3][3]={1,2,3,4,5,61,7,8,9};
	int max,i,j,n;
	max=mat[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<mat[i][j])
			{
				max=mat[i][j];
			}
		}
		printf("maximum value in row %d id %d\n",i+1,max);
		max=0;
	}
}
