/*
To delete all the vowels (i.e., a, A, e, E, i, I, o, O, u, U) from the string in C++ program. 
In case of english alphabet their are 5 lower case letter and 5 captipal letter, 
in this programming code we remove all small as well as capital letter from given string.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[150];
    int i, j, len;

    cout<<"Enter a line of string:\n";
    gets(str);
    
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        	
        	for(j=i; j<len; j++){
        		str[j] = str[j+1];
			}
        	len--;
		}
	}
	
	cout<<endl;
    cout<<"After Deleting Vowels: "<<str;
    
return 0;
}
