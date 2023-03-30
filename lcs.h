#ifndef LCS_H_INCLUDED
#define LCS_H_INCLUDED
typedef unsigned char   uint8_t;
typedef signed char     int8_t;
typedef signed int      int32_t;

int8_t insertionSort(int32_t *array, uint8_t arraySize);

void printArray(int32_t *array, uint8_t arraySize);

int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS);

#endif // LCS_H_INCLUDED
