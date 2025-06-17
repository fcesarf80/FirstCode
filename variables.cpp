/*#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("Portuguese"));

	//Declaração de Variáveis. Primeiro colocamos qual o tipo 
	//de variável que desejamos que o computador crie ao executar
	//nosso programa, neste caso escolhemos ambas como int (integer)
	//ou seja  o local da memória que estamos solicitando ao
	//computador deve ser capaz de arfmazenar números inteir(-3,
	//-2, -1, 0, 1, 2, 3).  
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "**********INICIO DO GAME**********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas <<std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Endereco que Numvidas ocupa na Memória RAM: " << &NumVidas << std::endl;
	std::cout << "Endereço que Pontuação ocupa na Memória RAM: " << &Score << std::endl;
	std::cout << "**********************************" << std::endl;

	std::cout << "**********DURANTE O GAME**********" << std::endl;
	Score = Score + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "**********************************" << std::endl;

	system("PAUSE");

	return 0;
}

*/