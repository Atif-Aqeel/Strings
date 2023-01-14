/*
To swap two strings in C++ Program we need strcpy() function. Here we receive two string from user side and swap these two strings
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str1[50], str2[50], temp[50];
	
	cout<<"Enter 1st String : ";
	gets(str1);
	cout<<"Enter 2nd String : ";
	gets(str2);
	
	//Build-in Function
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	
	cout<<endl<<"After Swapping String are: ";
	cout<<endl<<"1st String : "<<str1;
	cout<<endl<<"2nd String : "<<str2;
	
return 0;
}
