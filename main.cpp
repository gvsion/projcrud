#include <iostream>
#include "Gerenciador.h"

using namespace std;

int main() {
    Gerenciador gerenciador;
    gerenciador.carregarDados();
    gerenciador.menu();
    gerenciador.salvarDados();
    return 0;
}
