#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    }
    int b;
    cin>>b;
    for(int i=0;i<n;i++)
    {
    	if(a[i]!= -1)
    	{
    		x+=a[i];
		}
		else if(a[n-1]== -1)
		{
			cout<<a[n-1];
		}
	}
	cout<<x;
	
}
