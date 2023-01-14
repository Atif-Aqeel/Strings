//String Length is the number of character in the given String. 
//For Example: String="Atif" this word have 4 characters also this is the size of string.

#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch[50];
	int i, count=0;
	
	cout<<"Enter Character : ";
	gets(ch);
	
	for(i=0; ch[i]!='\0'; i++){
		count++;
	}

	cout<<endl<<"String Length is : "<<count;
	
return 0;
}
