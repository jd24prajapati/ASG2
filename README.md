# Section 1

In section 1, the program will create 10 diffrent arrays of random number with 
size of 100000, 1000000, and 10000000 each.

Hence, Total number of arrays will be 30

Execution:
suppose the generated array is [70, 30, 5, 100, 50, 32, 45, 98, 26, 72],<br>
it will be sorted to [5, 26, 30, 32, 45, 50, 70, 72, 98, 100] and the execution time will be measured as random time <br>
then, the ramdom array will sort again and the execution time will be measured as sorted time <br>
after getting the random and sorted time, array will be reverse and it would be like [100, 98, 72, 70, 50, 45, 32, 30, 26, 5] <br>

the reverse array will sorted and the execution time will be measured as inverse time <br>

Random, sorted and inverse time will be stored in an array then the program will genrate and follow the same process on another array


Final output will be:

Size :100000                    All time is in second(s)

Array/Time   |  Array 1   Array 2   Array 3   Array 4   Array 5   Array 6   Array 7   Array 8   Array 9   Array 10   <br>

Random time  |  0.033239  0.035119  0.029036  0.031206  0.030244  0.03107   0.03018   0.029734  0.029543  0.029951   <br>
Sorted time  |  0.013468  0.013201  0.013182  0.013401  0.015027  0.013156  0.015001  0.015086  0.014422  0.013628   <br>
Inverse time |  0.015848  0.010618  0.01299   0.012685  0.012457  0.011664  0.012596  0.01221   0.010957  0.011453   <br>

output will be same for remaning size as well <br>



# Section 2 

A file which will goint to be tested namely, 'sin_cos.cpp' is already given.

However, VSCode is not automatically detecting the .h and .cpp extention by it's ows, I have changes the sin_cos.cpp 
to sin_cos.h to include in main cpp file


Execution:

Test cases has benn written in the .cpp file to test that whether sin and cos is returning the right value or not.

Expected and actual(program generated) values id been given to a function to check for an error along with the path that it's need to get th actual result.

Error will be display as a error = 1 if found any. error = 0 otherwise

Final output will be:

Path: 7
Path: 4
Path: 2
Path count : 10   Degree : 80      Actual result : 1736      Expected : 1736      Error : 0    

-----------------------------------------------------------------------------------------------
Path: 7
Path: 4
Path: 3
Path count : 11   Degree : 30      Actual result : 8660      Expected : 9999      Error : 1    

-----------------------------------------------------------------------------------------------
