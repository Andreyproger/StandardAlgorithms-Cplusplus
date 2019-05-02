#include <iostream>
#include <string>
using namespace std;

template<typename T>
void selectSort(T array[], int size)
{
    int min_i= 0;
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
    int arrInt[4] = {1,2,3,0};
    selectSort(arrInt, 4);
    
}
