/*
There are two way to copy one sting into another string in C++ programming language, 
first using pre-defined library function strcpy() and other is without using any library function*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str1[50], str2[50];
	
	cout<<"Enter String : ";
	gets(str1);

	cout<<endl<<"Original String : "<<str1;
	
	//Build-in Function
	strcpy(str2, str1);
	cout<<endl<<"Copy String : "<<str2;
	
return 0;
}
