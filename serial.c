#include "serial.h"

void fUnWthOhm(RESISTOR* r, int* successptr)
{
    if (r->U != 0 && r->I != 0 && r->R == 0)
    {
        r->R = r->U/r->I;
        *successptr = 1;
    }
    else if (r->U != 0 && r->R != 0 && r->I == 0)
    {
        r->I = r->U/r->R;
        *successptr = 1;
    }
    else if (r->R != 0 && r->I != 0 && r->U == 0)
    {
        r->U = r->R * r->I;
        *successptr = 1;
    }
}

void resetOhm(RESISTOR* r)
{
    r->R = 0;
    r->I = 0;
    r->U = 0;
}
