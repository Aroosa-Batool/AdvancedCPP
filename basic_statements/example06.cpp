/**
 Write a program that draws in the terminal a big X out of the character 'X',
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   X X          X  X           X   X
    X            XX             X X
   X X           XX              X
                X  X            X X
                               X   X      */
#include <iostream>  // to allow use of std::cout and std::endl
using namespace std;
int main( ) {

        int input =0;
        cin>> input;
        int input2 = input-1;
        int y=0;




        for(int i=0; i<input; i++)
        {
            int p =y;

           for(int j=0; j<input; j++)
           {
                if(p==i || p== input2 ){
                    cout<< "X";

                }
                else{
                    cout<< " ";

                }
                 p++;

           }
           cout<<endl;


           input2--;

        }



  return 0;
}
