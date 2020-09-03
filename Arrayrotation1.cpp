//c++ program for array rotation in clockwise direction
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t; // no of test cases
	while(t--)
	{									
	int	n,p,k;
	cin>>n; //no of elements in array
	cin>>k; //no of rotations
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	k%=n;
	for(int i=0;i<n;i++)
	{
		p=a[(i+(n-k))%n]; 
		cout<<p<<" ";
	}
	cout<<"\n";

	}

return 0;
}
