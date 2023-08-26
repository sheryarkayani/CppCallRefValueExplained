#include<iostream>
using namespace std;

//differnce  between call by refrence and call by value


//call by value

// a and b are actual arguments to func
//copy of the variables are passed to it
int swap (int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}

//call by refrence

//for actual swap to happen we need to pass the address of the variables

int swapPtr (int* a, int* b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int swapVar (int &a, int &b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{

    int a =10;
    int b = 20;

    cout<<"value of a is "<<a<<"and value of b is "<<b<<endl;
    swap(a,b);

    cout<<"value of a is "<<a<<"and value of b is "<<b<<endl;
    //the above doesnt worked and didnt swapped values

    //after swapping using the pointers to swap

    //call by refrence
    swapPtr(&a,&b);
    cout<<"after using pointers";

    cout<<"value of a is "<<a<<"and value of b is "<<b<<endl;

    //by using adress
    swapVar(a,b);
    cout<<"after using adress";
    cout<<"value of a is "<<a<<"and value of b is "<<b<<endl;

    return 0;

}




