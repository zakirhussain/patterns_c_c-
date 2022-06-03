/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
A B C D
A B C D
A B C D
A B C D
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    char ch = 'A';
    
    while(i<=row){
        int j = 1;
        while(j<=col){
            std::cout << char(ch+j-1)<< " " ;
            j++;
        }
        std::cout<<"\n";
        i++;
    }
    return 0;
}
