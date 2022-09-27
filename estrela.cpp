#include "estrela.h"
#include "planeta.h"

Estrela::Estrela():Astro(){
    cout<< "I am brilhando "<<endl;
    tempoExistencia = 0;
    pPlaneta = NULL;
}

Estrela::~Estrela(){}