/*#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("Portuguese"));

	//Declara��o de Vari�veis. Primeiro colocamos qual o tipo 
	//de vari�vel que desejamos que o computador crie ao executar
	//nosso programa, neste caso escolhemos ambas como int (integer)
	//ou seja  o local da mem�ria que estamos solicitando ao
	//computador deve ser capaz de arfmazenar n�meros inteir(-3,
	//-2, -1, 0, 1, 2, 3).  
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "**********INICIO DO GAME**********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas <<std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Endereco que Numvidas ocupa na Mem�ria RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o ocupa na Mem�ria RAM: " << &Score << std::endl;
	std::cout << "**********************************" << std::endl;

	std::cout << "**********DURANTE O GAME**********" << std::endl;
	Score = Score + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "**********************************" << std::endl;

	system("PAUSE");

	return 0;
}

*/