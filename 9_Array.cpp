/*

? DEFINITION:
An Array is a Data Structure which stores multiple values of same kind inside a Single Variable

? LOCATION:
It is stored in contiguous memory blocks (or locations)

? ACCESS:
It can be accessed using Indexing (starting from 0)
We can both input and out our index
cin >> arr[2];
cout << arr[2];

? SYNTAX:                              EXAMPLE:
var_name data_type [size] = {elts};    Arr int[4] = {1,2,3,4};

? HOW TO FIND OTHER ELTS IN AN ARRAY:
An array also tells us the address of the first block in contagious memory, 
and once we know the address of the first block, then we can know the address of other elts in the memory too,
since they differ from a specific number of bytes from each other (like int = 4 bytes)

*Eg: If first elt is stored at 100 memory location, then the next elt will be stored at 104 (if its int datatype)

? UPDATION OF ARRAY WITHIN A FN:
Whenever you update an array within a fn (then unlike variable where a copy is made),
here the array's address is shared to the fn, due to which any change we make in that address 
has direct effect on main's array too

Therefore, any change we make in a fn's array, changes the value in main's array too! 
*(DUE TO THE ADDRESS OF ARRAY BEING SAME, AND PROVIDED TO BOTH)







*/