#include "planeta.h"

Planeta::Planeta():Astro(){
    tempoOrbita = 0;
    pSol = NULL;
}

Planeta::~Planeta(){}

float Planeta::Calc_quantidadeOrbita(){
    float result = 0.0;
    if(pSol != NULL){
        int tempoSol;
        tempoSol = pSol->Get_tempoExistencia();
        result = (float) tempoSol / tempoOrbita;
    }
    else{
        cout << "ponteiro do Sol está NULL. " << endl;
        result = -1.0;
    }
    return result;
}

