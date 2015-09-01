#include "serial.h"

void fUnWthOhm(RESISTOR* r)
{
    if (r->U != 0 && r->I != 0 && r->R == 0)
        r->R = r->U/r->I;
    else if (r->U != 0 && r->R != 0 && r->I == 0)
        r->I = r->U/r->R;
    else if (r->R != 0 && r->I != 0 && r->U == 0)
        r->U = r->R * r->I;
}

void resetOhm(RESISTOR* r)
{
    r->R = 0;
    r->I = 0;
    r->U = 0;
}
