/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
A 
B C
C D E
D E F G
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    char ch = 'A';
    
    while(i<=row){
        int j = 1;
        while(j<=i){
            std::cout << char(ch+i+j-2)<< " " ;
            j++;
        }
        std::cout<<"\n";
        i++;
    }
    return 0;
}
