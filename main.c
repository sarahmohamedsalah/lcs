#include <stdio.h>
#include <stdlib.h>
#include "LCS.h"
 uint8_t size;


int main(void)
{
    uint8_t val;
    int8_t ret;
    int8_t i;
    printf("Please enter array size: ");
    scanf("%c", &size);
    int32_t array[size];

    for (i = 0; i < size ; i++)
    {   printf("Please enter array element ");
        scanf("%d", array+i);
    }

    uint8_t arrSize = sizeof(array) / sizeof(array[0]);

   (void)insertionSort(array, arrSize);

    printArray(array, arrSize);


    ret = lcsGetSize(array, arrSize, &val);

    if(ret == -1)
    {
        printf("\nEMPTY_ARRAY\n");
    }
    else if( ret == -2)
    {
        printf("\nARRAY_SIZE error \n");
    }
    else if( ret == -3 )
    {
        printf("\nNO_LCS \n");
    }
    else
    {
        printf(" \n %d ", val);
        // printArray(array, arrSize);
    }





    return 0;
}
