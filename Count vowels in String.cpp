//Count Number of vowels in String

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[150];
    int i,vowels,consonants,digits,spaces;
    vowels=consonants=digits=spaces=0;

    cout<<"Enter a line of string:\n";
    gets(str);
    
    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        	++vowels;	
		}
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
        	++consonants;	
		}
        else if(str[i]>='0' && str[i]<='9'){
        	++digits;	
		}
        else if (str[i]==' '){
        	++spaces;
		}            
	}
	
	cout<<endl;
    cout<<"Vowels: "<<vowels;
    cout<<"\nConsonants: "<<consonants;
    cout<<"\nDigits: "<<digits;
    cout<<"\nWhite spaces: "<<spaces;
    
return 0;
}
