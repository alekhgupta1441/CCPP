#include<iostream>
using namespace std;
int main(){
int i,a[50],n,data;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the elements in the array"<<endl;
for(i=0;i<n;i++)
{
	cin>>a[i];
}
cout<<"enter the element to be searched"<<endl;
cin>>data;
for(i=0;i<n;i++)
	{
		if(a[i]==data)
		break;
		}	
		if(i<n)
		{
			cout<<"element found at :"<<i;
			
		}
		else
		
{
	cout<<"element not found";
}
}
