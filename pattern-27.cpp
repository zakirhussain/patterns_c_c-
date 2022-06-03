/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1
*/

int main()
{
    int row = 5, col = 4;
    int i=1;
    while(i<=row){
        
        int j = 1;
        while(j <= (row-i+1)){
            std::cout<<j;
            j++;
        }
        
        
        int k = 1;
        while(k<=i-1){
            std::cout << "*";
            k++;
        }
        
        int l=1;
        while(l < i){
            std::cout<< "*";
            l++;
        }
        
        int m=(row-i+1);
        while(m >= 1){
            std::cout<< m;
            m--;
        }
        
        std::cout<<"\n";
        i++;
    }
    return 0;
}
