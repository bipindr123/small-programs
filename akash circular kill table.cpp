#include<iostream.h>

int main()
{
	int a[100],n,q,k,c,i,count,bous;
	cout<<"enter nuber of people ";
	cin>>n;
	cout<<"\nenter starting guy who has gun";
	cin>>q;
	cout<<"\nenter constant";
	cin>>c;
	count = n; //no of people alive
	//set everyone to not dead
	for(i=0;i<n;++i)
	{
		a[i]=1;
	}
	//till last one remains
	while(count!=1)
	{
		k=q%c; //no of people to kill left of the person chosen
		for(i=0;i<k;)
		{
			++q;
			if(q>=n)
				q=0;
			if(a[q]!=0)
			{
				a[q]=0;
				cout<<"\n killed"<<q;
				--count;
				++i;
			}
		}
		do{
			++q;
			if(q>=n)
				q=0;
		}while(a[q]==0);
		cout<<"\nhas gun "<<q;
	}
	cout<<"\nlast person is"<<q;
}