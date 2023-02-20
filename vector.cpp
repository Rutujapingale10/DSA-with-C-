#include<iostream>
#include<vector>
using namespace std;       
int main()
{
	vector<int>arr;
	cout<<"Initial size of vector :"<<sizeof(arr)<<endl; //compiler dependant
	cout<<"Intitial size of vector :"<<arr.size()<<endl;  //size is 0 initially
	cout<<"Initial capacity of vactor :"<<arr.capacity()<<endl; //capacity is also 0
	
	//insert 
	arr.push_back(3);
	arr.push_back(2);
	//print
	for(int i=0;i<arr.size();i++)
	{
		
		cout<<"vector element at "<<i<<" position is :"<<arr[i]<<endl;
	}
	//remove last element
	arr.pop_back();
	//print
		for(int i=0;i<arr.size();i++)
	{
		
		cout<<"vector element at "<<i<<" position is :"<<arr[i]<<endl;
	}
	
	vector<int>brr(10);  //vector<int>brr(10,1) also allowed all element will be 1
	cout<<"Size of vector brr is :"<<brr.size()<<endl; //explicitly giving size to vector
	cout<<"capacity of vector brr is :"<<brr.capacity()<<endl;
	
	//print
	for(int i=0;i<brr.size();i++)
	{
		cout<<brr[i]<<" ";
	}//by default all elements are  zero
	cout<<endl;
	cout<<brr.size()<<endl;
	vector<int> arr1={1,2,3,4,5,6};
	cout<<arr1.size()<<endl;
	
	//to check vector is empty or not
	cout<<"to check vector is empty or not (0 - false ,1 - true ): "<<brr.empty()<<endl;
	
	return 0;
}