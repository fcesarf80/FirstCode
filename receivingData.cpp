#include <iostream>
#include< iomanip >
#include<string>
#include <tchar.h> // Necessário para _T()

int main()
{
	system("COLOR 02");
	_tsetlocale(LC_ALL, _T("Portuguese"));
		
	int Numero01, Numero02;
	int Result;
	std::cout << std::string(5, ' ') << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << std::string(5, ' ') << "Numero01 = " << Numero01 << std::endl;
	std::cout << std::string(5, ' ') << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << std::string(5, ' ') << "Numero02 = " << Numero02 << std::endl;
	std::cout << std::endl;

	Result = Numero01 + Numero02;
	std::cout << std::string(5, ' ') << "A soma dos dois números é: " << Result << "\n";
	Result = Numero01 - Numero02;
	std::cout << std::string(5, ' ') << "A subtração dos dois números é:" << Result << "\n";
	Result = Numero01 * Numero02;
	std::cout << std::string(5, ' ') << "O produto dos dois números é: " << Result << "\n";
	Result = Numero01 / Numero02;
	std::cout << std::string(5, ' ') << "A divisão dos dois números é: " << Result << "\n";
	Result = Numero01 % Numero02;
	std::cout << std::string(5, ' ') << "O resto da divisão dos dois números é: " << Result << std::endl;
	




	system("PAUSE");

	return 0;

}