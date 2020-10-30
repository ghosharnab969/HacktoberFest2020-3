#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,a[10],i,min;
	cout<<"ENTER NO ELEMENTS : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	 cin>>a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
	 if(a[i]<min)
	 {
	   min=a[i];
	 }
	 cout<<"THE SMALLEST NO. IN THE ARRAY IS : "<<min;
	}	
}
