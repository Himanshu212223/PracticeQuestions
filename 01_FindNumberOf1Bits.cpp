/*
    Problem -
    ---------------------

    Find the number of 1s in bits of any number.
    Ex-
    if number = 0 -> total no. of 1s are 0      0000 in bits.
    if number = 1 -> total no. of 1s are 1      0001 in bits.
    if number = 2 -> total no. of 1s are 1      0010 in bits.
    if number = 5 -> total no. of 1s are 2      0101 in bits.


    Approach - 
    ---------------------
    - Since, bitwise & operator when operates with 1, returns 1.
        so, number & 1 will return 1 if and only if there is 1 present in bits of number.

    - So, till the time nubmer is > 0, we can check number & 1 condition, and if returns true, then, increase count value.

    - After every iteration, just right shift the number by 1 using Right Shift Operator.  


*/

#include <bits/stdc++.h>

using namespace std ;

int main(){
    int numb = 15 ;
    int count = 0 ;

    while(numb > 0){
        if(numb&1){
            count++;
        }
        numb = numb >> 1 ;
    }

    cout <<<"Total number of 1s in "<< numb << " is : "<< count << endl ;
    
    return 0 ;
}