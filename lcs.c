#include "LCS.h"

int8_t insertionSort(int32_t *array, uint8_t arraySize)
{
    uint8_t key,x,y;
    int32_t temp;
    if(arraySize == 0)
        return -1;  //the array is empty
    if(arraySize < 0 || arraySize >10)
        return -2;  //if the array size is 0 or >10
    for(x=1; x<arraySize; x++)
    {
        y=x;
        while(array[y] < array[y-1] && y > 0)
        {
            temp=array[y];
            array[y]=array[y-1];
            array[y-1]=temp;
            y--;
        }
    }
    return 0;       //sorting is done without errors
}

void printArray(int32_t *array, uint8_t arraySize)
{int x;
    for( x=0 ; x<arraySize; x++)
    {
        printf("%d ",array[x]);
    }
    printf("\n");
}

int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS)
{
    uint8_t count=0,max=0,j=0,return_value;
    return_value=insertionSort(array,arraySize);
    if(return_value==0)
    {int i;
        for( i=0; i<arraySize; i++)
        {
            j=i+1;
            if(array[i]==array[j]-1)
                count++;
            else
            {
                if(max < count)
                {
                    max=count+1;
                    count=0;
                }
            }
        }
        *sizeofLCS=max;
        return 0;
    }
    else if(return_value==-1)
        return -1;
    else
        return -2;

}

