// Range of datatypes:
     
        #include <stdio.h>
#include <limits.h>  
#include <float.h>  

int main() {
    // Integer types
    printf("CHAR range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("INT range: %d to %d\n", INT_MIN, INT_MAX);
    printf("LONG range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("LONG LONG range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("UNSIGNED INT max: %u\n", UINT_MAX);
    printf("UNSIGNED LONG max: %lu\n", ULONG_MAX);

    // Floating-point types
    printf("\nFLOAT range: %.3e to %.3e\n", FLT_MIN, FLT_MAX);
    printf("FLOAT precision: %d digits\n", FLT_DIG);

    printf("DOUBLE range: %.3e to %.3e\n", DBL_MIN, DBL_MAX);
    printf("DOUBLE precision: %d digits\n", DBL_DIG);

    printf("LONG DOUBLE range: %.3Le to %.3Le\n", LDBL_MIN, LDBL_MAX);
    printf("LONG DOUBLE precision: %d digits\n", LDBL_DIG);

    return 0;
}

Output:
CHAR range: -128 to 127
INT range: -2147483648 to 2147483647
LONG range: -9223372036854775808 to 9223372036854775807
LONG LONG range: -9223372036854775808 to 9223372036854775807
UNSIGNED INT max: 4294967295
UNSIGNED LONG max: 18446744073709551615

FLOAT range: 1.175e-38 to 3.403e+38
FLOAT precision: 6 digits
DOUBLE range: 2.225e-308 to 1.798e+308
DOUBLE precision: 15 digits
LONG DOUBLE range: 3.362e-4932 to 1.190e+4932
LONG DOUBLE precision: 18 digits


