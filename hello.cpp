#include<iostream>
#include<conio.h>
using namespace std;
string a = " ~!@#$%^&*()_+QWERTYUIOP{}|\\ASDFGHJKL:\"ZXCVBNM<>?`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
void delay(int a){
	++a;
	while(--a){
		for (int c = 1; c <= 447365; c++){}
	}
}
void matchstring(string a,string b){
	for(int i = 0;i<b.length();i++){
		for(int j = 0;j<a.length();j++){
			cout<<a[j];
			delay(1);
			cout<<"\b \b";
			if(a[j]==b[i]){
			cout<<a[j];
			}
		}
	}
}
int main(){
	string b = "Hello World ;)";
	matchstring(a,b);
	getch();
	return 0;
}