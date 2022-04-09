#include<iostream>
using namespace std;
int main()
{
	int s1=0,s2=1,s3,i,n;
	cout<<"enter the value";
	cin>>n;
	if(n==0)
	{
		cout<<s1;
	}
	else
	{

        cout<<s1<<s2;
	}	
	for(i=3;i<=n;i++)
	{
	s3=s1+s2;
	cout<<s3;
	s1=s2;
	s2=s3;
}



return 0;
}
