/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
      1
    2 2 
  3 3 3 
4 4 4 4 
    
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    
    while(i<=row){
        
        int space = row-i;
        
        while(space){
            std::cout<<" ";
            space--;
        }
        
        
        int j = 1;
        while(j<=i){
            std::cout << i;
            j++;
        }
        
        std::cout<<"\n";
        i++;
    }
    return 0;
}