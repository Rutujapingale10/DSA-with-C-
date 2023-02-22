#include<iostream>
#include<limits.h>
using namespace std;
void printSumrow_wise(int [][3],int,int);
int MaxElement(int [][3],int ,int );
void printSumrow_wise(int arr[][3],int row,int col)
{
	for(int i=0;i<row;i++)
	{
		int sum=0;
		for(int j=0;j<col;j++)
		{
			sum = sum + (arr[i][j]);
		
		}
		cout<<"sum of "<<"["<<i<<"]"<<"row is : "<<sum<<endl;
	}
}
int MaxElement(int arr[][3],int row,int col)
{
	int maxi=INT_MIN;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]>maxi)
			{
				maxi=arr[i][j];
			}
		}
	}
	return maxi;
}
int main()
{
	int arr[4][3]; //4 - rows and 3 - coloumns
	
	
	//input
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter element : "<<endl;
			cin>>arr[i][j];
		}
	}
	
	//printing row wise
	cout<<"------------\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"------------\n";
	
	printSumrow_wise(arr,4,3);
int max=MaxElement(arr,4,3);
cout<<"Maximum element of array "<<max;
}
