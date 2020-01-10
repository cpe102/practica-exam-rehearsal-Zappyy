#include<iostream>
#include<string>
using namespace std;
string compress(string x)
{
	int i=0;
	string b;
	while(i < x.size()) {
		b += x[i];
		i+=3;
	}
	return b;
}
int main()
{
    string a = compress("CPECMU");
    string b = compress("X");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
