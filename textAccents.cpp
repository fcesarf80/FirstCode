//#include <iostream>
//#include <locale.h>
//#include <tchar.h> // Necess�rio para _T()
//
//int main() {
//    // Define a localidade para portugu�s
//    if (_tsetlocale(LC_ALL, _T("Portuguese")) != NULL) {
//        std::wcout << L"Localidade definida para portugu�s." << std::endl;
//    }
//    else {
//        std::wcerr << L"Erro ao definir a localidade para portugu�s." << std::endl;
//    }
//
//    // Agora voc� pode usar caracteres acentuados em suas strings
//    std::wcout << L"Ol�, mundo com acentos!" << std::endl;
//    std::wcout << L"Acento agudo: �, �, �, �, �" << std::endl;
//    std::wcout << L"Acento grave: �, �, �, �, �" << std::endl;
//    std::wcout << L"Acento circumflexo: �, �, �, �, �" << std::endl;
//    std::wcout << L"Til: �, �" << std::endl;
//    std::wcout << L"Trema: �, �, �, �, �" << std::endl;
//    std::wcout << L"�" << std::endl;
//
//    return 0;
//}