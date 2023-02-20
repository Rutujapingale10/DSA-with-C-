#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>array{1,0,1,0,1,0,0,1,1,1,1,0,0,0,0};
	int start=0;
	int end=array.size()-1;
	int i=0;
	while(i!=end)
	{
		if(array[i]==0)
		{
			swap(array[start],array[i]);
			start++;
			i++;
		}
		else
		{
			swap(array[end],array[i]);
			end--;
		}
		
	}
	//print
	
	for(int i=0;i<array.size();i++)
	{
		cout<<array[i]<<" ";
	}
}
