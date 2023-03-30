#include "LCS.h"

int8_t insertionSort(int32_t *array, uint8_t arraySize){
int i, element, j;
int8_t returnValue = 0;
if(arraySize > 0 && arraySize < 11){
        for (i = 1; i < arraySize; i++) {
         element = array[i];
j = i - 1; /* Move elements of arr[0..i-1], that are greater than key by one position */
 while (j >= 0 && array[j] > element) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }
    returnValue = 0;
}

   else if(arraySize ==0 ){

        returnValue = -1;}

else if( arraySize >10){
    returnValue = -2;




}return	returnValue;
}



void printArray(int32_t *array, uint8_t arraySize){
uint8_t i;
    for (i = 0; i < arraySize; i++){}
        printf("%d ", array[i]);
   printf("\n\n");

}

int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS){
uint8_t counter = 1, i = 0;
	int8_t functionReturn = 0, returnValue = 0;

	*sizeofLCS = 1;

	functionReturn = insertionSort(array, arraySize);

	if(! functionReturn)
	{
		while (i < arraySize)
		{
			if (array[i + 1] - array[i] == 1)
			{
				counter++;
				if (counter > *sizeofLCS)
				{
					*sizeofLCS = counter;
				}
				else
				{
					/*DO NOTHING*/
				}
			}
			else
			{
				counter = 1;
			}
			i++;
		}
		if (*sizeofLCS > 1)
		{
			returnValue = 0;
		}
		else
		{
			returnValue = -3;
		}
	}
	else if (functionReturn == -1)
	{
		returnValue = -1;
	}
	else if (functionReturn == -2)
	{
		returnValue = -2;
	}
	else
	{
		/*DO NOTHING*/
	}
	return returnValue;

}

