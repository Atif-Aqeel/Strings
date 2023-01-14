#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[50];
	int i=0, len, j;
	
	cout<<"Enter Any String: ";
	gets(str);
	
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
			len--;
		}
	}
	cout<<"String After Removing Spaces: "<<str;

}
