#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream plik_in;
	fstream plik_out;
	string linia;
	int iloscmsc = 0;



	plik_in.open("dane.txt", ios::in);
	plik_out.open("wynik.txt", ios::out);



	while (!plik_in.eof())
	{
		plik_in >> linia;

		if (linia == "May")
		{
			iloscmsc++;
		}
			 

	}

	plik_out << iloscmsc;

	plik_out.close();
	plik_in.close();


}