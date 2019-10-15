#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "write number of elements to be inserted" <<"\n";
	cin >> n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cout << "array after insertion is-" << "\n";
	for(int i=0;i<n;i++)
		cout << arr[i];
	cout << "write index no. of element to be deleted-";
    int j;
    cin >> j;
    while(j<n)
    	{
    	 arr[j-1]=arr[j];
         j++;
        }
  	n=n-1;
   	cout << "array after deletion is-" <<"\n";
	for(int i=0;i<n;i++)
		cout << arr[i];
	cout << "write element to be searched-";
	int k;
	cin >> k;
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
			break;
	}
    i=i+1;
    cout << "element searched is at position-" << i <<"\n";
    cout << "write element to be updated and its position";
    int m,l;
    cin >> m >> l;
    for(i=0;i<n;i++)
	{
		if(i==l-1)
			arr[i]=m;
	}
	cout << "array after updation is-" << "\n";
	for(int i=0;i<n;i++)
		cout << arr[i];
	return 0;
}
