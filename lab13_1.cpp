#include<iostream>
using namespace std;

int fibonacci(unsigned int a)
{
    if(a==0 or a==1)
    {
        return a;
    }
    else if(x>1)
    {
        return fibonacci(x-1)+fibonacci(x-2);
    } 
}
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
