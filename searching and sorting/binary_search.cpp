#include<iostream>
#include<algorithm> //std binary search
using namespace std;
int BinarySearch(int [],int ,int );
int BinarySearch(int arr[],int size,int target)
{
	int start =0;
	int end = size-1;
	int mid=(start+end)/2;
	while(start<=end)
	{
		
		if(target==arr[mid])
		{
		//	cout<<"Target found : "<<ele;
			//break;
			return mid;
			
		}
		else if(target>arr[mid])
		{
			start=mid+1;
		mid=(start+end)/2;	
		}
		//target is < element search in left
		else{
			end = mid-1;
			mid=(start+end)/2;
			
		}
		
		
	}
	return -1;
}
int main()
{
	int arr[]={
	1,4,5,6,7};
	int size=sizeof(arr)/sizeof(int);
	int target;
	cout<<"Enter Target"<<endl;
	cin>>target;
	int ans=BinarySearch(arr,size,target);
	if(ans==-1)
	{
		cout<<"target not found"<<endl;
	}
	else
	{
		
	
	cout<<"target found at  :"<<ans<<" index"<<endl;
    }
    
    //binary_search
    
    if(binary_search(arr,arr+size,1))
    {
    	cout<<"found";
	}
	else
	{
		cout<<"not found";
	}
    
    
}
