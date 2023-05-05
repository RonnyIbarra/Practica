#include<iostream>

using namespace std;

int main()
{
	float a,b,c,d, resultado;
	
	cout<<"\nDigite el valor a: ";
	cin>>a;
	
	cout<<"\nDigite el valor de b: ";
	cin>>b;
	
	cout<<"\nDigite el valor de c: ";
	cin>>c;
	
	cout<<"\nDigite el valor de d: ";
	cin>>d;
	
	resultado= (a+b) / (c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado es:"<<resultado;
		
	return 0;
}