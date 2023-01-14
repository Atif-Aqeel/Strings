//To compare any two string first we need to find length of each string and then compare both strings. 
//If both string have same length then compare character by character of each string

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str1[50], str2[50], i, j, flag=0;
	
	cout<<"Enter 1st String : ";
	gets(str1);
	cout<<"Enter 2nd String : ";
	gets(str2);
	
	//Find Length of both Strings
	i=0;
	while(str1[i] != '\0'){
		i++;
	}
	j=0;
	while(str2[j] != '\0'){
		j++;
	}
	
	if(i != j){
		flag = 0;
	}
	else{
		for(i=0,j=0; str1[i]!='\0',str2[j]!='\0'; i++,j++){
			if(str1[i] == str2[j]){
				flag =1;
			}
		}
	}
	
	if(flag==0){
		cout<<endl<<"Strings are not Equal";
	}
	else{
		cout<<endl<<"Strings are Equal ";
	}
		
//	cout<<endl<<"String Length is : "<<count;
	
return 0;
}
