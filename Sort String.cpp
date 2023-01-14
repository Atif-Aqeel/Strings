//Sort String
//To sort strings in C++, We need to take two string from user side and sort them on the basis of alphabets.

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[5][50], temp[50];
	int i, j, n;
	
	cout<<"How many Strings U want to enter : ";
	cin>>n;
		
	cout<<"Enter Strings : "<<endl;
	for(i=0; i<n ; i++){
		cin>>(str[i]);
	}

	//loop through 2 string arrays
	for(i=1; i<n; i++)
	{
		for(j=1; j<n; j++)
		{
			//The strcmp() compares two strings character by character. If the strings are equal, the function returns 0.
			if(strcmp(str[j-1], str[j]) > 0)
			{
				strcpy(temp, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	
	
	cout<<endl<<"Names in Alphabetical Order are: \n";
	for(i=0; i<n; i++)
	{
		cout<<str[i]<<"\n";
	}
		
return 0;
}



