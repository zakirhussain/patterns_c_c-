/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


/*
      1
    2 3
  4 5 6
7 8 9 10   
*/

int main()
{
    int row = 4, col = 4;
    int i=1;
    int cnt =1;
    while(i<=row){
        
        int space = row-i;
        
        while(space){
            std::cout<<" ";
            space--;
        }
        
        
        int j = 1;
        while(j<=i){
            std::cout << cnt;
            j++;cnt++;
        }
        
        std::cout<<"\n";
        i++;
    }
    return 0;
}
