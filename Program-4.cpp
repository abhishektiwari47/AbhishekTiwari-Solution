#include<iostream>
using namespace std;
int res[9];
int main()
{   
	printf("Enter the size of array\n");
	int size;
	cin>>size;
	int arr[size];
	res[0]=size;
	for(int j=0;j<size;j++)
	{
	   cin>>arr[j];
	for(int i=2;i<=9;i++)
	{
	    if(arr[j]%i==0)
	    {
	        res[i-1]=res[i-1]+1;
		}
	}
	}
	//we can use unordered_map for this task 
	cout<<"{1:"<<size;
	for(int i=2;i<=9;i++)
	{   
		cout<<","<<i<<":"<<res[i-1];
	}
	cout<<"}";
	
}
