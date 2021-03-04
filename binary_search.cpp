#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[50],search,swap=0,mid,l,r,n ;
	cout<<"enter the size of a array : ";
	cin>>n;
	cout<<"enter array elements : "<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"the array elements are : ";
	for(int i=0; i<n; i++)
		{
		cout<<arr[i]<<" ";
		}

	l=0;
	r=n-1;
		
	cout<<"\nsearch the elements : ";
	cin>>search;
	while(l<r)
	{
		mid = (l+r)/2;
	
		if(arr[mid]<search)
		{
			l=mid+1;
		}
		else if( arr[mid] == search)
		{
			cout<<"element is found at position "<<mid+1;
			break;
		}
	  
		else
		{
			r=mid-1;
		}
	
	
	if (l>r)
	{
		cout<<search<<" is not Found  in the array ";
	}
}
	getch();
	return 0;
}	
