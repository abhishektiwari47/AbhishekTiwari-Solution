#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int j=1;
	cout<<"input a = "<<a<<", then output: "<<j;
	if(a%2==0)
	{
		a=a-1;
	}
	for(int i=2;i<=a;i++)
	{
		j+=2;
	    cout<<", "<<j;
		
	}
	return 0;
}
