typedef struct
{
    float U;
    float I;
    float R;
}
RESISTOR;

typedef struct
{
    int startpoint;
    RESISTOR resistors[20];
    int endpoint;
}
LINE;

void fUnWthOhm(RESISTOR* r, int* successptr);
void resetOhm(RESISTOR* r);
