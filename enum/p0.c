/*write C Program to create enumerated data type for 12 month display their values in integer constants*/

#include <stdio.h>

enum month{jan=1,feb,mar,apr,may,june,july,aug,seb,oct,nov,dec};
void main()
{
    enum month m;
    printf("%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n",jan,feb,mar,apr,may,june,july,aug,seb,oct,nov,dec);

    
}