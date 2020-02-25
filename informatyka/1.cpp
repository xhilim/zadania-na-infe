#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream plik_in;
	fstream plik_out;
	string napis;

	plik_in.open("dane.txt", ios::in);
	plik_out.open("wynik.txt", ios::out);

	while (!plik_in.eof())
	{
		plik_in >> napis;

		if (napis == "September")
		{
			plik_out << napis << endl;
		}
	}

	return 0;


}
