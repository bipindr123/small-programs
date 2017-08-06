#include<iostream.h>

int main()
{
	int x,i,a[10]={},num,ans=0,n;
	cout<<"enter number ";
	cin>>x;
	cout<<"enter no of times ";
	cin>>n;
	while(n>0)
	{
		memset(a, 0, sizeof(a));
		ans=0;
		while(x>0)
		{
			num = x%10;
			x=x/10;
			++a[num];
		}
		
		for(i=0;i<10;++i)
		{
			if(a[i]!=0)
			{
				ans = ans*100 + a[i]*10+i;
			}
		}
		cout<<ans<<endl;
		x=ans;
		--n;
	}
}