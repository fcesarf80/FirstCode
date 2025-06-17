//#include <iostream>
//#include <locale.h>
//#include <tchar.h> // Necessário para _T()
//
//int main() {
//    // Define a localidade para português
//    if (_tsetlocale(LC_ALL, _T("Portuguese")) != NULL) {
//        std::wcout << L"Localidade definida para português." << std::endl;
//    }
//    else {
//        std::wcerr << L"Erro ao definir a localidade para português." << std::endl;
//    }
//
//    // Agora você pode usar caracteres acentuados em suas strings
//    std::wcout << L"Olá, mundo com acentos!" << std::endl;
//    std::wcout << L"Acento agudo: á, é, í, ó, ú" << std::endl;
//    std::wcout << L"Acento grave: à, è, ì, ò, ù" << std::endl;
//    std::wcout << L"Acento circumflexo: â, ê, î, ô, û" << std::endl;
//    std::wcout << L"Til: ã, õ" << std::endl;
//    std::wcout << L"Trema: ä, ë, ï, ö, ü" << std::endl;
//    std::wcout << L"Ç" << std::endl;
//
//    return 0;
//}