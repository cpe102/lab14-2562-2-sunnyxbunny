#include<iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<*y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"--------------------------\n";
	
	//address
	cout<<"address of a = "<<&a<<"\n";
	cout<<"address of b = "<<&b<<"\n";
	cout<<"address of c = "<<&c<<"\n";
	cout<<"address of x = "<<&x<<"\n";
	cout<<"address of y = "<<&y<<"\n";
	cout<<"address of z = "<<&z<<"\n";
	cout<<"--------------------------\n";
	
	//b='F';
	c='F';
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<*y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"--------------------------\n";
	
	*y='W';
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"--------------------------\n";
	
	*x=6;
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<*y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"--------------------------\n";
	
	**z=7;
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<*y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"--------------------------\n";
	
	return 0;
}
