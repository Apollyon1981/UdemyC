#include <stdio.h>

// call by value
float add1(float value)
{
    value = value + 1.0f;
    return value;
}

// call by reference
void add2(float *value)
{
    *value = *value + 1.0f; // dereference
}

int main()
{
    float v_main = 0.0f;

    printf("%f\n", v_main);
    v_main = add1(v_main);
    printf("%f\n", v_main);

    add2(&v_main);
    printf("%f\n", v_main);

    return 0;
}
