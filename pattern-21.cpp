/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
* * * *
  * * *
    * *
      *
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    
    while(i<=row){
        
        int space = i-1;
        
        while(space){
            std::cout<<" ";
            space--;
        }
        
        
        int j = 1;
        while(j<=(row-i+1)){
            std::cout << "*";
            j++;
        }
        
        std::cout<<"\n";
        i++;
    }
    return 0;
}
