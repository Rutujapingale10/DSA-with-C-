#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={1,2,3,4,5};
	vector<int>arr1={10,11,12,15};
	vector<int>ans;
	//insert arr to ans
	for(int i=0;i<arr.size();i++)
	{
		ans.push_back(arr[i]);
		
	}
	//insert arr1 to ans
	for(int i=0;i<arr1.size();i++)
	{
		ans.push_back(arr1[i]);
	}
	
	//print ans array
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
