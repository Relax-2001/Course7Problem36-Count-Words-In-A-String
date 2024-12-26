#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string:\n";
	getline(cin , UserString);
	return UserString;
}

short CountEachWord(string UserString)
{

	string Delem = " ";
	short Pos = 0 ;
	string Word = "";
	short Counter = 0;

	while ((Pos = UserString.find(Delem)) != std::string::npos)
	{

		Word = UserString.substr(0 , Pos);

		if (Word != "")
		{
			Counter++;
		}

		UserString.erase(0 , Pos + Delem.length());

	}

	if (UserString != "")
	{
		Counter++;
	}

	return Counter;

}

int main()
{

	cout << "Number of words in the string = " << CountEachWord(ReadString());

	return 0;
}