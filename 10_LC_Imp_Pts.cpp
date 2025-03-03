/*

?Overflow Prevention: 
The condition sum > (INT_MAX - rem) / 10 ensures that 
sum * 10 + rem does not exceed INT_MAX.

?Early Exit for Negative Numbers: 
Negative numbers are not palindromes, 
so you can immediately return false for x < 0.

& Ambresand
It is used to pass the value PASS BY REFERENCE, instead of PASS BY VALUE

XOR operation cuts two same numbers
*/