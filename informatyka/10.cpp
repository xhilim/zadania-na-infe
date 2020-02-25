#include <fstream>

using namespace std;

int main()
{
	fstream plik_in;
	fstream plik_out;
	int linia;




	plik_in.open("dane.txt", ios::in);
	plik_out.open("wynik.txt", ios::out);



	while (!plik_in.eof())
	{
		plik_in >> linia;

		if (linia %2 == 0)
		{
			plik_out << linia << endl;
		}


	}

	

	plik_out.close();
	plik_in.close();


}