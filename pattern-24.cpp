/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
1 2 3 4 
  2 3 4 
    3 4 
      4
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
        int cnt = i;
        while(j<=(row-i+1)){
            std::cout << cnt;
            j++; cnt++;
        }
        
        std::cout<<"\n";
        i++;
    }
    return 0;
}
