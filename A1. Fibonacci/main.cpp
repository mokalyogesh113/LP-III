#include<iostream>
using namespace std;


int fib(int n)
{
    if(n<=2)
        return 1;
    int fib1 = 1, fib2 = 1;
    int fib = 0;
    for(int i=3;i<=n;i++)
    {
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
    }
    return fib;
}

int fibR(int n)
{
    if(n<=2)
        return 1;
    return fibR(n-1) + fibR(n-2);
}



int main()
{
    int n;
    cout<<"Enter the Number :- ";
    cin>>n;
    
    cout<<n<<"th Number in fibonacci series is :- "<<fib(n)<<"\t(Using Iteration) "<<endl;
    cout<<n<<"th Number in fibonacci series is :- "<<fibR(n)<<"\t(Using Recursion) "<<endl;
    
}


/*

Enter the Number :- 10
10th Number in fibonacci series is :- 55        (Using Iteration) 
10th Number in fibonacci series is :- 55        (Using Recursion) 

*/