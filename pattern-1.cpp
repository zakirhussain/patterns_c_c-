/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
* * * *
* * * *
* * * *
* * * *
*/

int main()
{
    int row = 4, col = 4;
    int i=0;
    
    while(i<row){
        int j =0;
        while(j<col){
            std::cout << "* " ;
            j++;
        }
        std::cout<<"\n";
        i++;
    }
    return 0;
}
