/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
A 
B B
C C C
D D D D
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    char ch = 'A';
    
    while(i<=row){
        int j = 1;
        while(j<=i){
            std::cout << char (ch+i-1)<< " " ;
            j++;
        }
        std::cout<<"\n";
        i++;
    }
    return 0;
}
