#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream plik_in;
	fstream plik_out;
	string linia;
	int iloscdni = 0;




	plik_in.open("dane.txt", ios::in);
	plik_out.open("wynik.txt", ios::out);



	while (!plik_in.eof())
	{
		plik_in >> linia;

		if (linia !="Wednesday")
		{
			iloscdni++;
		}
			 

	}
	plik_out << iloscdni;


	plik_out.close();
	plik_in.close();


}