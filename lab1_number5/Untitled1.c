//#include <stdio.h>
//#include <stdlib.h>
//
//int* binarySearch(int Array[], int n, int* inputValuePTR);
//void insertionSort(int* Array, int size);
//
//int main()
//{
//    #define SIZE 8
//    int TestArray[SIZE] = {3, 7, 4, 1, 8, 9, 5, 2};
//
//    for (int i = 0; i < SIZE; i++)
//        printf("Array[%d] = %d\n", i, TestArray[i]);
//    for (int i = 0; i < SIZE; i++)
//        printf("&Array[%d] = %p\n", i, &TestArray[i]);
//    printf("/////////////////////////////////\n");
//
//    insertionSort(TestArray, SIZE);
//
//    for (int i = 0; i < SIZE; i++)
//        printf("Array[%d] = %d\n", i, TestArray[i]);
//
//    int inputNumber;
//    scanf("%d", inputNumber);
//
//}
//
//int* binarySearch(int Array[], int size, int* inputValue)
//{
//    int start = 0;
//    int end = size - 1;
//    int median;
//    printf("inputValue = %p\n", inputValue);
//    int* pointer = &median;
//
//    while (start < end)
//    {
//
//        *pointer = (end + start) / 2;
//
//        printf("/start = %d\n""/end = %d\n", start, end);
//        printf("/median = %d\n", median);
//        printf("//Array[*pointer] = %d\n""//inputValue = %d\n", Array[*pointer], *inputValue);
//
//        if (Array[*pointer] == *inputValue)
//        {
//            pointer = &Array[*pointer];
//            return pointer;
//        }
//
//        if (Array[*pointer] > *inputValue)
//        {
//            end = median - 1;
//        }
//
//        else //Array[*pointer] < *inputValue
//        {
//            start = median + 1;
//        }
//
//    }
//    printf("!!!!!!!!!Array[start] = %d\n""!!!!!!!!!Array[*pointer] = %d\n", Array[start], Array[*pointer]);
////
////    if (Array[*pointer] != Array[start])
////        exit(228);
//
//    printf("////Array[start] = %d\n""////inputValue = %d\n", Array[start], *inputValue);
//
//    if (*inputValue >  Array[start])
//    {
//        printf("pointer = %p\n""~pointer + 1 = %p\n", pointer, pointer + 1);
//        pointer = &Array[start];
//        return pointer + 1;
//    }
//    printf("~pointer = %d\n", *pointer);
//    pointer = &Array[start];
//    return pointer;
//}
//
//void insertionSort(int* Array, int size)
//{
//    for (int i = 1; i < size; i++)
//    {
//
//        int *CurrNumPTR = &Array[i];
//        printf("&Array[i] = %p\n", &Array[i]);
//        printf("CurrNumPTR = %p \tCurrNum = %d \n", CurrNumPTR, *CurrNumPTR);
//        int *placeForNumPTR = binarySearchOfIndex(Array, i + 1, CurrNumPTR);
//        printf("placeForNumPTR = %p\n", placeForNumPTR);
//
//        int Number = Array[i];
//
//        for (int *PTR = &Array[i-1]; PTR >= placeForNumPTR; PTR--)
//        {
//            printf("----PTR %p\n", PTR);
//            printf("----place %p\n", placeForNumPTR);
//            *(PTR+1) = *PTR;
//        }
//        for (int j = 0; j <= i; j++)
//            printf("\t\t\t\tArray[%d] = %d\n", j, Array[j]);
//        printf("placeForNumPTR = %p \tplaceForNum = %d\n", placeForNumPTR, *placeForNumPTR);
//        printf("CurrNumPTR = %p \tCurrNum = %d \n", CurrNumPTR, *CurrNumPTR);
//        *placeForNumPTR = Number;
//
//        for (int j = 0; j <= i; j++)
//            printf("\t\t\t\t\tArray[%d] = %d\n", j, Array[j]);
//    }
//}
//
//
