/*
Frequency of character in any string means how many times a particular character is present in any string. 
For example; suppose we have string hitesh in this word h repeated 2 times, it is the frequency of h in string hitesh.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[50], ch; 
	int i, count=0;
	
	cout<<"Enter String : ";
	gets(str);
	cout<<"Enter Characrter from given String : "<<str<<endl;
	cin>>ch;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==ch){
			count++;
		}
	}
	
	if(count==0){
		cout<<endl<<"Given Character not Found ";
	}
	else{
		cout<<endl<<"Repition of \""<<ch<<"\"  "<<count<<" times. ";
	}
	
	
	
}
