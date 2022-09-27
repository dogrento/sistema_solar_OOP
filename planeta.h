#ifndef _PLANETA_H_
#define _PLANETA_H_

#include "estrela.h"

class Planeta : public Astro{
    private:
        int tempoOrbita;
        Estrela* pSol;

    public:
        Planeta();
        ~Planeta();

        void Set_tempoOrbita(int tmp){tempoOrbita = tmp;};
        int Get_tempoOrbita(){return tempoOrbita;};
        float Calc_quantidadeOrbita();
        void Set_sol(Estrela* pS){pSol = pS;};
};

#endif