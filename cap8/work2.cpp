#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct CandyBar{
	
	char *name;
	double weight;
	int carl;
};

void CandyBarSet(CandyBar &can, const char * name = "Millennium", double wei = 2.85, int carl = 350){
	
	int len = strlen(name);
	
	can.name = new char[len+1];
	memset(can.name, 0 , sizeof(can.name));

	memcpy(can.name, name, len);
	can.weight = wei;
	can.carl = carl;
}

void show(const CandyBar &can){
	
	cout<<"name: "<<can.name;
	cout<<"\nwieght: "<<can.weight<<endl;
	cout<<"carl: "<<can.carl<<endl;
}
int main()
{
	CandyBar can;
	CandyBarSet(can);
	show(can);
	return 0;
}
