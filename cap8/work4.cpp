#include <iostream>
#include  <cstring>

using namespace std;

struct stringy{
	
	char *str;
	int ct;
};

void set(stringy &s, char *str);

void show(char const *str, int n=1);
void show(const stringy &s, int n=1);


int main()
{
	stringy beany;

	char testing[] = "Reallity isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany,2);

	testing[0] = 'G';
	testing[1] = 'W';

	show(testing);
	show(testing,2);
	show("Done!");
	return 0;

}

void set(stringy &s, char *str)
{
	int len = strlen(str);
	s.str = new char[len+1];
	s.ct = len;

	memcpy(s.str, str, len+1);
}

void show(char const *str, int n)
{
	for(int i=1; i<=n; i++){
		cout<<str<<endl;
	}
}

void show(const stringy &s, int n)
{
	for(int i = 1; i<=n; i++){
		
		cout<<s.str<<endl;
	}
}
