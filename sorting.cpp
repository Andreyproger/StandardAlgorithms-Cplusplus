// Example program
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int array[], int size)
{
    for(int i = 0; i < size; i++)
        for(int j = size - 1; j>= i+1; j--)
        {
            if(array[j] < array[j-1])
                swap(array[j],array[j-1]);
        }
}

void selectSort(int array[], int size)
{
    int min_i = 0;
    for(int i = 0; i < size - 1; i++)
    {
        min_i = i;
        for(int j = i; j < size; j++)
        {
            if(array[j] < array[min_i])
            {
                min_i = j;
            }
        }
        
        swap(array[i], array[min_i]);
    }
}

int main()
{
    int N = 4;
    int arrInt[N] = {1,2,3,0};
    selectSort(arrInt, N);
    
    cout << "Selection sort:" << endl;
    for(int i = 0; i < N ; i++)
    {
        cout << arrInt[i] << " ";
    }
    
    int arrIntbS[N] = {1,2,3,0};
    bubbleSort(arrIntbS, N);
    
    cout << endl << "Bubble sort:" << endl;
    for(int i = 0; i < N ; i++)
    {
        cout << arrIntbS[i] << " ";
    }
    
}
