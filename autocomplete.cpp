#include <iostream>
#include<string>
#include<ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    string str[30000];
    string str2[30000];
    string str3[30000];
    int n,n2,j,flag;
    cin>>n;
    for(int i =0;i<n;++i)
    {
        cin>>str[i];
        str3[i]=str[i];
    }

    for(int i =0;i<n;++i)
    {
        std::transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
    }

    cin>>n2;
    for(int i =0;i<n2;++i)
    {
        cin>>str2[i];
    }
    
    for(int i=0;i<n2;++i)
    {
        flag=0;
        for(j=0;j<n;++j)
        {
			if(str[j].find(str2[i])!=std::string::npos)
			{
				cout<<endl<<str3[j];
				flag=1;
			}
        }
        if(flag==0)
        {
        	cout<<"\nNo suggestions";
        	str[n]=str2[i];
        	str3[n]=str2[i];
			++n;
        }
        
    }

}
