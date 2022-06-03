/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    
    while(i<=row){
        int j =col;
        while(j>=1){
            std::cout << j<< " " ;
            j--;
        }
        std::cout<<"\n";
        i++;
    }
    return 0;
}
