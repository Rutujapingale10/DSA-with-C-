#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int> >arr; //vector of vector 
	
	vector<int>a{1,2,3,4};
	vector<int>b{6,7,8};
	vector<int>c{8,9};
	
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr[i].size();j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"====================="<<endl;
	//another way
	int row=3;
	int col=4;
	vector<vector<int> >arr1(row,vector<int>(col,5)); //vector<vector<int> >arr(row,vector<int>(4,5))
	for(int i=0;i<arr1.size();i++)
	{
		for(int j=0;j<arr1[i].size();j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	
	
 }
 
 cout<<"=================="<<endl;
 vector<vector<int> >arr2(2,vector<int>(3,6));
 


 for(int i=0;i<arr2.size();i++)
 {
 	for(int j=0;j<arr2[i].size();j++)
 	{
 		cout<<arr2[i][j]<<" ";
	 }
	 cout<<endl;
 }
 cout<<"---------------------"<<endl;
 int row1=2;
 int col1=2;
 vector<vector<int> >arr3(row1,vector<int>(col1));
 
 int ele;
 for(int i=0;i<row1;i++)
 {
 	for(int j=0;j<col1;j++)
 	{
 		cout<<"enter ele";
 		cin>>ele;
 	//	arr3[i].push_back(ele);
 	arr3[i][j]=ele;
	 }
 }
 
 for(int i=0;i<arr3.size();i++)
 {
 	for(int j=0;j<arr3[i].size();j++)
 	{
 		cout<<arr3[i][j]<<" ";
	 }
	 cout<<endl;
 }
	return 0;
}
