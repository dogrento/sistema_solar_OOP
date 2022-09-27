#include "sistemaSolar.h"

SistemaSolar::SistemaSolar():sol(){
    cout << "oi " << endl;
    jupiter.Set_tempoOrbita(30);
    sol.Set_tempoExistencia(30000);
    jupiter.Set_sol(&sol);
    Exec();
}

SistemaSolar::~SistemaSolar(){
    cout << "flwssss" << endl;
}

void SistemaSolar::Exec(){
    float qJupiter = 0.0;
    qJupiter = jupiter.Calc_quantidadeOrbita();

    cout << "A quantidade de orbitas de Jupiter é: " << qJupiter << endl;
    cout << "Numero astronômico de Sol: " << sol.Get_na();
}
