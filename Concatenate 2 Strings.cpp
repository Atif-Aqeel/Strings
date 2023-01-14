/*
Combined two string or Concatenate two string means add both string with each other, 
we can perform this operation using library function or without library function. 
For example if first string is john and second string is porter then after combined these string output will be johnporter.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str1[50], str2[50];
	
	cout<<"Enter 1st String : ";
	gets(str1);
	cout<<"Enter 2nd String : ";
	gets(str2);
	
	//Build-in Function
	strcat(str1, str2);
	
	cout<<endl<<"Combined String is : "<<str1;
	
return 0;
}
