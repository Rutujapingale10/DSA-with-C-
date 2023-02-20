#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>);
int findUnique(vector<int>arr)
{
	int ans=0;
	for(int i=0;i<arr.size();i++)
	{
		ans=ans^arr[i];
		cout<<"value of ans"<<ans<<endl;
	}
	return ans;
}
int main()
{
	int N;
	cout<<"Enter the size of array :";
	cin>>N;
	vector<int>arr(N);
	
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
		
	}
	
	int ans=findUnique(arr);
	
	cout<<"Unique element of array is : "<<ans;
}