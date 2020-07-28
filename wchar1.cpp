#include<iostream>
#include<clocale>
using namespace std;

main()
{
	setlocale(LC_CTYPE,"");
	wchar_t ch;
	for(ch=2304;ch<=2431;ch++)
		wcout<<ch<<" ";
	cout<<endl;
}
