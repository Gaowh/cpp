#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

int main()
{
	int a = 10;
	int b = 20;

	Swap(a, b);

	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	
	double c =10;
	double d =20;

	Swap(c,d);
	
	cout<<"c: "<<c<<"\nd: "<<d<<endl;
	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}
