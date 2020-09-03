// c++ program for array rotation in anti-clockwise direction
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{									
	int	n,p,k;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	k%=n;
	for(int i=0;i<n;i++)
	{
		p=a[(i+(n+k)-1)%n]; //just a small change as compared to clockwise program, here we are going to shift elements from start of the array
		cout<<p<<" ";
	}
	cout<<"\n";
}
return 0;
}
