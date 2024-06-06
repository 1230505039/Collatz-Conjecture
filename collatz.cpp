#include <stdlib.h>
#include <iostream>

using namespace std;

int divideByTwo(int number){
    
    return number / 2;

}


int equationForOdd(int number){
    
    return ((3 * number) + 1);
    
}

int main(){

    system("cls");

    cout<<"Collatz Conjecture is alike loop, "<<endl<<"1. Pick a number,"<<endl<<"2. If the number is even divide by two if it is odd do this equation,";
    cout<<endl<<"             f(x) = (3x + 1) x is the number."<<endl<<"3. Do these articles until number reach to 1.";

    int number;

    cout<<endl<<endl<<"Pick a number: ";
    
    cin>>number;

    cout<<endl<<endl;

    while(number != 1){
        if(number % 2 == 0){
            cout<<number<<" is even --> "<<number<<" / 2"<<endl;
            number = divideByTwo(number);
        }

        else{
            cout<<number<<" is odd --> 3 * "<<number<<" + 1"<<endl;
            number = equationForOdd(number);
        }
    }

    cout<<number;



}
