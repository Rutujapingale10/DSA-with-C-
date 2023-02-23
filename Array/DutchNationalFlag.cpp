#include<iostream>
#include<vector>
using namespace std;
void MoveAllNegativeToLeft(int*,int);
void MoveAllNegativeToLeft(int*arr,int size)
{
	//Dutch National Flag Algo
	int low=0;
	int heigh=size-1;
	while(low<heigh)
	{
    //Dutch National Flag Algo
		if(arr[low]<0)
		{
			low++;
		}
		else if(arr[heigh]>0)
		{
			heigh--;
		}
		else
		{
			swap(arr[low],arr[heigh]);
		}
	}
	
}
int main()
{
	int arr[]={1,2,-3,4,-5,6};
	
	int size= sizeof(arr)/sizeof(int);
	
	MoveAllNegativeToLeft(arr,size);
	
	//print
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
