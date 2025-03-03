/*

To convert from Integer to Binary, we use this formula:
-> ans = (bit * pow(10, i)) + ans;

Along with this, we also include the <cmath> library in order to perform the power operation


But there's a catch in it, 
As, if we input a very large number which is out of limits of int, 
then this logic will not apply to it, and will return the same input number

In order to convert a negative number to its binary form, we take its 1's and 2's complement

*/