ACM/ICPC SELF TRAINING
============

##SOME NEW FACTS TO ME (SEP 2013)##

* Java
    + StreamTokenizer and PrintWriter is faster than Scanner and System.out
    + Reform of Token from StreamTokenizer is necessary: (int)input.nextToken()
    + Use multiple Scanner in one program will cause problem (Runtime Error).
    + Java cannot manipulate each elements in the string (read only). So, if you don't like `subString()` method, you can easily use `toCharArray()` method to do such operation.
    + Generally, Java is slower than C++ (especially for manipulating character and IO)
    + If you want to duplicate an array in a short time, use `clone()` method
    + Java's `split()` method is a masterpiece, can make code shorter.
    + `Arrays.sort()` has range [1,n). So if you are sorting an Array with 1~n, you should call `Arrays.sort(a,1,n+1)`.
    + BigInteger and BigDecimal is good to use, but very very slow.
    + `replace()` method in String is a little bitch, so be careful.
* C++
    + This code will redirect standard IO stream to file IO stream: `freopen("input.in","r",stdin);` `freopen("output.out","w",stdout);` Use such code, you can read data from file directly with `cin` and `cout`.
    + Although removing character in string is a bit difficult, however, if you can change the character you want to remove to an unique character, it will looks like being removed.
    + Remember to use EOF when there is no end. (can't be seen in keyboard input, but can use file to demonstrate.
* UVa
    + When you use Java, change your main class as "class Main{}" before submission.
    + Make sure print new line at the end of the file.
    + Some critical tests are needed.
    + If you have mixed input (have both number and string in input), try to read all of them as string and convert string to number.

* URAL
    + Sometimes, the relationship between numbers are much more effective than use searching algorithm.
    + If you have n integers and want to determine the median, there is an O(N) (not exactly O(N)) solution. By using priority queue, load first n/2+1 numbers, and then load another n/2, meanwhile, keep popping the one with highest priority.
    + Sometimes, precision of numbers is very very important. You may want to rescale the number or add an very small number (e.x.: 0.0000001) to keep the precision.
