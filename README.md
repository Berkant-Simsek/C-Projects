# C-Projects

## Project 1
In this project, main purpose is to get the secret code from the computer. There are five questions to be answered. In each question, user will face a problem and all problems are related to the solution of the previous problem. Before solving the problem, it is not possible to move to the next question. First question will start with the day the user was born. That means each code is specific for each user. When user reaches and solves the fifth problem he/she will get the key code.

Here are the questions: 

1)  Please enter the numeric day of your birthday between 1 and 7 (example Mon=1, Tue=2). If user enters number that is not between 1 and 7, then print error and ask number again.
Let’s assume the result of question 1 is “x”.  

2)  What is the x’th power of n (i.e. nx)? Here, n is a number that can only be computed as follows:
Get the initial letter of your name in uppercase (A to Z, others will not be tested). Look at the decimal number that stands for that letter in ASCII table and take the mod of it by 4. 
Hint: There is no need to look at the ASCII table, actually. Both in Labs and MT1, we have shown you the trick. 
For example, Oguzhan is my name. Initial letter of my name is O. The number stands for that letter in ASCII table is 79. mod(79,4) = 3. Hence, n = 3.
Also you have to print both the letter and the value n on screen. In order to print in correct way, examine the example below.
Let’s assume the result of question 2 is “y”. 

3)  How many prime numbers do exist until y? (y is included.) 
Hint: A prime number is a whole number greater than 1 that has no positive divisors other than 1 and itself. 
For example, there are 9 prime numbers until 27.
Let’s assume the result of question 3 is  “z”. 

4)  Enter zth element of Fibonacci series. 
Hint: Fibonacci series is a series of numbers in which each number (Fibonacci number) is the sum of the two preceding numbers. A part of the series is 1, 1, 2, 3, 5, 8, …
For example,  if z==6, then w=8 .
Hint: 0th element of Fibonacci series assumed to be 0.
Let’s assume the result of question 4 is “w”. 

5)  Finally enter your age and compute w×age (× is multiplication sign), which is the desired keycode. 
Remember that program should continue until user enters a correct answer for each question. For 5th question, age should be between 1 and 100, if it is not, you are expected to print the error message of It is not correct! and ask again.
After 5th question is correctly answered, print “Congratulations! You found the code! The code is …”

You’re expected to implement the functions below (of course with some parameters and proper return types):
askFirstQuestion()
askSecondQuestion()
askThirdQuestion()
askFourthQuestion()
askFifthQuestion() 
In addition to these methods you can also implement more functions.
Hint: Please be careful about the messages on the output of the example. If you think your algorithm works but you got red screen, probably you misspell something in the output screen.

For example:
|                  Input 							       |                                  Result                                  |
|--------------------------------------------|--------------------------------------------------------------------------|
|    -1 3 C 27 15 9 36 33 34 10 341 340			 | 1) Please enter your birthday between 1 and 7(example Mon=1, Tue=2..):   |
|                                            |    -1                                                                    |
|                                            |     Please enter an appropriate day!                                     |
|                                            |     3                                                                    |
|                                            |     Enter initial letter of your name, (capital english letters only)    |
|                                            |     C --> 3                                                              |
|                                            |  2) What is the 3th power of 3?                                          |
|                                            |     27                                                                   |
|                                            |  3) How many prime numbers can you count until 27?                       |
|                                            |     15                                                                   |
|                                            |     It is not correct!                                                   |
|                                            |     9                                                                    |
|                                            |  4) Enter 9th element of the Fibonacci series:                           |
|                                            |     36                                                                   |
|                                            |     It is not correct!                                                   |
|                                            |     33                                                                   |
|                                            |     It is not correct!                                                   |
|                                            |     34                                                                   |
|                                            |     Enter your age(between 1-100):                                       |
|                                            |     10                                                                   |
|                                            |  5) What is the result of 34 * 10?                                       |
|                                            |     341                                                                  |
|                                            |     It is not correct!                                                   |
|                                            |     340                                                                  |
|                                            |     Congratulations! You found the code! The code is 340                 |
|                                            |                                                                          |
|  4 Z 17 16 7 8 6 5 13 8 50 402 4000 400    |  1) Please enter your birthday between 1 and 7(example Mon=1, Tue=2..):  |
|                                            |       4                                                                  |
|                                            |       Enter initial letter of your name, (capital english letters only)  |
|                                            |       Z --> 2                                                            |
|                                            |    2) What is the 4th power of 2?                                        |
|                                            |       17                                                                 |
|                                            |       It is not correct!                                                 |
|                                            |       16                                                                 |
|                                            |    3) How many prime numbers can you count until 16?                     |
|                                            |       7                                                                  |
|                                            |       It is not correct!                                                 |
|                                            |       8                                                                  |
|                                            |       It is not correct!                                                 |
|                                            |       6                                                                  |
|                                            |    4) Enter 6th element of the Fibonacci series:                         |
|                                            |       5                                                                  |
|                                            |       It is not correct!                                                 |
|                                            |       13                                                                 |
|                                            |       It is not correct!                                                 |
|                                            |       8                                                                  |
|                                            |       Enter your age(between 1-100):                                     |
|                                            |       50                                                                 |
|                                            |    5) What is the result of 8 * 50?                                      |
|                                            |       402                                                                |
|                                            |       It is not correct!                                                 |
|                                            |       4000                                                               |
|                                            |       It is not correct!                                                 |
|                                            |       400                                                                |
|                                            |       Congratulations! You found the code! The code is 400               |
