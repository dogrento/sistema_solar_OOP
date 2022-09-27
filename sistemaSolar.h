#ifndef _SISTEMASOLAR_H_
#define _SISTEMASOLAR_H_

#include "estrela.h"
#include "planeta.h"

class SistemaSolar{
    private:
        Estrela sol;
        Planeta jupiter;

    public:
        SistemaSolar ();
        ~SistemaSolar ();

        void Exec();
};

#endif