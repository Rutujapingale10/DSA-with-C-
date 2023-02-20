#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>array{1,2,3,4,5,6,8};
	vector<int>array1{10,11,2,3,9};
	vector<int>intersection;
	
	//outer loop of an array
	for(int i=0;i<array.size();i++)
	{
		int element = array[i];
		//for every element run loop on array1
		for(int j=0;j<array1.size();j++)
		{
			if(element==array1[j])
			{
				intersection.push_back(element);
			}
		}
	}
	
	//print new array
	for(int i=0;i<intersection.size();i++)
	{
		cout<<intersection[i]<<" ";
	}
	
	
}
