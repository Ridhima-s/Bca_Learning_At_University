//Write a C code to find the number of distinct elements in a sorted array.

int main()
{
  int arr[]={1,1,2,3,4};
	int n,i,count=0;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		count++;
	}
	printf("Number of distinct numbers in this array is %d ",count+1);
  return 0;
}
