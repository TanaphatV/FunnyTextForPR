#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	cout << "insert file content here" << endl;
	string content;
	cin >> content; 

	for (int i = 0; i < 12169; i++)
	{
		stringstream s = stringstream("text");
		s << i;
		s << ".txt";

		std::ofstream outfile(s.str());

		outfile << content << std::endl;

		outfile.close();
	}
	return 0;
}