#include "iostream"
#include "cstring"

using namespace std;

int main()
{
	char c;
	while(cin>>c)
	{
	if(!strchr("AIUEOYaiueoy",c))
		cout<<'.'<<(char)tolower(c);
	}
	return 0;
}
