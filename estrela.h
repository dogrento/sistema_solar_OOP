// #pragma once
#ifndef _ESTRELA_H_
#define _ESTRELA_H_

#include <iostream>
using namespace std;

#include "astro.h"

class Planeta;

class Estrela:public Astro{
    private:
        int tempoExistencia;
        Planeta* pPlaneta;

    public:
        Estrela();
        ~Estrela();

        void Set_tempoExistencia(int tmp){tempoExistencia = tmp;};
        int Get_tempoExistencia(){return tempoExistencia;};
};

#endif
