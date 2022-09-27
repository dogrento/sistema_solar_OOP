#ifndef _ASTRO_H_
#define _ASTRO_H_

class Astro{

    protected:
        int NA;
    
    public:
        Astro(){NA = 0;};
        ~Astro(){};
        void Set_na(int value){NA = value;};
        int Get_na(){return NA;};
        
};

#endif