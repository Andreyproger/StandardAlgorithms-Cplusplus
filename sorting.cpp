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

void quickSort(int * data, int const size)
{
    int const lenD = size;
    int pivot = 0;
    int ind = lenD/2;
    int i,j = 0,k = 0;
    if(lenD>1){
      int* L = new int[lenD];
      int* R = new int[lenD];
      pivot = data[ind];
      for(i=0;i<lenD;i++){
        if(i!=ind){
          if(data[i]<pivot){
            L[j] = data[i];
            j++;
          }
          else{
            R[k] = data[i];
            k++;
          }
        }
      }
      quickSort(L,j);
      quickSort(R,k);
      for(int cnt=0;cnt<lenD;cnt++){
        if(cnt<j){
          data[cnt] = L[cnt];;
        }
        else if(cnt==j){
          data[cnt] = pivot;
        }
        else{
          data[cnt] = R[cnt-(j+1)];
        }
      }
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
    
    int arrIntqS[N] = {1,2,3,0};
    quickSort(arrIntqS, N);
    
    cout << endl << "Bubble sort:" << endl;
    for(int i = 0; i < N ; i++)
    {
        cout << arrIntbS[i] << " ";
    }
}
