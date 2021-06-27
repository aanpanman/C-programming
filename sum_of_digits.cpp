#include <iostream>  
using namespace std;  
int main()  
{  
	int n,sum=0,m;    
	cout<<"Enter a number"<<endl;    
	cin>>n; 
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
    }   
    cout<<"Sum is "<<sum<<endl; 
	int s1=0,j  
	while ((sum/10)>0)
	{
		while(sum>0)
		{
			j=sum%10;    
			s1=s1+j;    
			sum=sum/10; 
			cout<<"sum is "<<s1<<endl;   
	    }      
	}   
	return 0;  
}  
