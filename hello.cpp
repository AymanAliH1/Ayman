#include<iostream>
#include<conio.h>
using namespace std;
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
			delay(3);
			cout<<"\b \b";
			if(a[j]==b[i]){
			cout<<a[j];
			}
		}
	}
}
void w(){
	cout<<"\n . . ";
	for(int i = 0;i<4;i++){
		cout<<".";
		delay(300);
		cout<<"\b \b";
		delay(250);
	}
	cout<<"\b\b  ";
}
int main(){
	string a = " ~!@#$%^&*()_+QWERTYUIOP{}|\\ASDFGHJKL:\"ZXCVBNM<>?`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string b = "Hello World ;)";
	string c = "Hi Ayman :)";
	matchstring(a,b);
	w();
	cout<<"\t\t\t";
	matchstring(a,c);
	getch();
	return 0;
}