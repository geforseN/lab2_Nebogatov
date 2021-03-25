#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int* binarySearch(int Array[], int size, int* inputValuePTR);
void insertionSort(int Array[], int size);

int main()
{
    //������� ���� � �������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //�������������
    #define SIZE 8
    int TestArray[SIZE] = {3, 7, 4, 1, 8, 9, 5, 2};
    //�������� ������
    for (int i = 0; i < SIZE; i++)
        printf("A[%d] = %d  ", i, TestArray[i]);
    printf("\n\n");
    //����������
    insertionSort(TestArray, SIZE);
    //�������� ������
    for (int i = 0; i < SIZE; i++)
        printf("A[%d] = %d  ", i, TestArray[i]);
    printf("\n\n");
    //���� �����
    int inputNumber;
    printf("������� ����� ��� ����� � ������: ");
    scanf("%d", &inputNumber);
    printf("\n");
    //������� ����� ��� �����
    int* placePTR = binarySearch(TestArray, SIZE, &inputNumber);
    int index = (placePTR - &TestArray[0]);
    printf("������ ����� %d � �������: %d\n", inputNumber, index);
}

int* binarySearch(int Array[], int size, int* inputValuePTR)
{
    int start = 0;
    int end = size - 1;
    int median;

    while (start < end)
    {
        median = (end + start) / 2;

        if (Array[median] == *inputValuePTR)
        {
            return &Array[median];
        }

        if (Array[median] > *inputValuePTR)
        {
            end = median - 1;
        }

        else //if (Array[median] < *inputValuePTR)
        {
            start = median + 1;
        }

    }

    if (*inputValuePTR >  Array[start])
    {
        return &Array[start+1];
    }

    return &Array[start];

}

void insertionSort(int Array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        //�������� �����
        int* CurrNumPTR = &Array[i];

        //������� ����� ��� ��������� *CurrNumPTR
        int* placeForNumPTR = binarySearch(Array, i + 1, CurrNumPTR);

        //��������� �������� ��������� �����, ��� ��� *CurrNumPTR ���������
        int Number = Array[i];

        //������� ����� ������
        for (int* PTR = &Array[i-1]; PTR >= placeForNumPTR; PTR--)
        {
            *(PTR+1) = *PTR;
        }

        //��������� �������� ����� � ������ ������� �������
        *placeForNumPTR = Number;

    }
}

