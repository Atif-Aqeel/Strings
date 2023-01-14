/*
Reverse of String means reverse the position of all character of any String. For example reverse of porter is retrop.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[50], temp;
	int i, j;
	
	cout<<"Enter String : ";
	gets(str);

	
	i=0;
	j=strlen(str) - 1;
	while(i<j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		
		i++;
		j--;
	}

	cout<<endl<<"Reverse String is : "<<str;
	
return 0;
}
