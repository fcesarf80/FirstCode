#include <iostream>
#include< iomanip >
#include<string>
#include <tchar.h> // Necess�rio para _T()

int main()
{
	system("COLOR 02");
	_tsetlocale(LC_ALL, _T("Portuguese"));
		
	int Numero01, Numero02;
	int Result;
	std::cout << std::string(5, ' ') << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << std::string(5, ' ') << "Numero01 = " << Numero01 << std::endl;
	std::cout << std::string(5, ' ') << "Digite o segundo n�mero: ";
	std::cin >> Numero02;
	std::cout << std::string(5, ' ') << "Numero02 = " << Numero02 << std::endl;
	std::cout << std::endl;

	Result = Numero01 + Numero02;
	std::cout << std::string(5, ' ') << "A soma dos dois n�meros �: " << Result << "\n";
	Result = Numero01 - Numero02;
	std::cout << std::string(5, ' ') << "A subtra��o dos dois n�meros �:" << Result << "\n";
	Result = Numero01 * Numero02;
	std::cout << std::string(5, ' ') << "O produto dos dois n�meros �: " << Result << "\n";
	Result = Numero01 / Numero02;
	std::cout << std::string(5, ' ') << "A divis�o dos dois n�meros �: " << Result << "\n";
	Result = Numero01 % Numero02;
	std::cout << std::string(5, ' ') << "O resto da divis�o dos dois n�meros �: " << Result << std::endl;
	




	system("PAUSE");

	return 0;

}