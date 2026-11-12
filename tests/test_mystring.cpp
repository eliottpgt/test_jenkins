#include <cassert>
#include <cstring>
#include <iostream>
#include "MyString.hpp"

void test_defaut_constructeur(){
    MyString s;
    assert(s[0] == '\0');
    std::cout << "[OK] Test constructeur par défaut" << std::endl;
}

void test_constructeur_chaine() {
    MyString s("Hello");
    assert(s[0] == 'H');
    assert(s[4] == 'o');
    std::cout << "[OK] Test constructeur chaine" << std::endl;
}

void test_copie_profonde() {
    MyString s1("Test");
    MyString s2 = s1;
    assert(s1[0] == s2[0]);
    // Vérification que les mémoires sont distinctes si vous avez operator[] non-const
    s1[0] = 'B';
    assert(s2[0] == 'T');
    std::cout << "[OK] Test copie profonde" << std::endl;
}

int main() {
    test_defaut_constructeur();
    test_constructeur_chaine();
    test_copie_profonde();

    std::cout << "Tous les tests sont passés avec succès !" << std::endl;
    return 0; // 0 = Succès (important pour CTest et la CI)
}