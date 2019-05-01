#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void eratostheneSiev(int N)
{
    int *arr = new int[1000];
    
    for(int i = 2; i < N + 1; i++)
    {
        arr[i] = i;
    }
    for(int k = 2; k < N + 1; k++)
    {
        if(arr[k] != 0)
        {
            for(int j = k * k; j <= N + 1; j+=k)
                arr[j] = 0;
            
            cout << arr[k] << endl;
        }
        
    }
    delete [] arr;
}

bool prime(int num);

void primeatob(int a, int b)
{
    for(int temp = 0, counter = 1; a <= b; a++, counter++ )
    {
        temp = static_cast<int>(prime(a));
        cout << "№ " << counter 
             << ": (a = " << a 
             << " : " << boolalpha 
             << temp << ")" << endl;
    }
}

bool prime(int num)
{
    if(num == 2)
        return true;
    
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return false;
    return true;
}

int main(int argc, char** argv) {
    
    int a, b, N;
    cin >> a;
    cin >> b;
    cin >> N;
    if(a <= b)
    {
        cout << endl << "prime from a to b:" << endl;
        primeatob(a,b);
    }
    cout << endl << "Sieve Eratosthene:" << endl;
    eratostheneSiev(N);
    
    return 0;
}
