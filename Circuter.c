#include <stdio.h>
#include "serial.h"

int main(void)
{
        LINE a;
        a.startpoint = 0;
        a.resistors[0].U = 0;
        a.resistors[0].I = 3;
        a.resistors[0].R = 0;
        
        a.resistors[1].U = 0;
        a.resistors[1].I = 10;
        a.resistors[1].R = 0;
        
        int U, I, R;
        int success = 0;
        do
        {
            printf("%i\n", sizeof(RESISTOR));
        }
        while (success == 1);
}
