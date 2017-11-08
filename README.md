# Cannibals-and-Explorers-
This project solves the puzzle of cannibals and explorers using recursion
-----------------------------------------------------------------------------
Cannibals
Tamanna Sharma
Date: 10/27/2017
I tried to solve this puzzle or problem with the help of recursion. I used vectors because I have never used vectors before and I wanted to try to make the program with it. I thought to use looping method, but I figured that it won’t help me learn the new concept. So, I used vectors.

ALGORITHM PSEUDO CODE

If cannibals and explorer equals 3 and boat equals 1
then return 0

else if completed.at(10) is not equal 1 and boat equals 0
then completed.at(10) equal 1
temporary is equal to solution(initial Cannibals - 2, initial Explorer, final Explorer, final Cannibal + 2, 1)
output as ---           EEECCC

else if completed.at(9) not equals 1
then completed.at(9) equal 1
temporary is equal to solution(initial Cannibals + 1, initial Explorer, final Explorer, final Cannibal - 1, 0)
output as      CC              EEEC

else if (completed.at(8) not equals  1 and  b equals 0
then completed.at(8) equal 1
temporary is equal to solution(initial Cannibals - 2, initial Explorer, final Explorer, final Cannibal + 2, 1)
output as  C              EEECC

else if completed.at(7) not equal 1
then completed.at(7) equal 1;
temporary is equal to solution(initial Cannibals + 1, initial Explorer, final Explorer, final Cannibal - 1, 0)
output as CCC              EEE

else if completed.at(6) not equals 1 and b equals 0
then
completed.at(6) equal 1
temporary is equal to solution(initial Cannibals, initial Explorer - 2, final Explorer + 2, final Cannibal, 1)
output as CC              EEEC

else if completed.at(5) not equals 1
then completed.at(5) equal 1
temporary is equal to solution(initial Cannibals + 1, initial Explorer + 1, final Explorer - 1, final Cannibal - 1, 0)
output as CCEE              EC

else if completed.at(4) not equals 1 and  b equals 0
then completed.at(4) equal 1;
temporary is equal to solution(initial Cannibals, initial Explorer - 2, final Explorer + 2, final Cannibal, 1)
output as CE              EECC

else if completed.at(3) not equals1
then completed.at(3) equal 1;
temporary is equal to solution(initial Cannibals + 1, initial Explorer, final Explorer, final Cannibal - 1, 0)
output as CEEE              CC

else if completed.at(2) not equals 1 and b equals 0
then completed.at(2) equal 1
temporary is equal to solution(initial Cannibals - 2, initial Explorer, final Explorer, final Cannibal + 2, 1)
output as EEE              CCC

else if completed.at(1) not equals 1
then completed.at (1) equal 1
temporary is equal to solution(initial Cannibals, initial Explorer + 1, final Explorer - 1, final Cannibal, 0)
output as CCEEE              C

else if completed.at(0) not equals 1 and b equals 0
then completed.at(0) equal 1
temporary is equal to solution(initial Cannibals - 1, initial Explorer - 1, final Explorer + 1, final Cannibal + 1, 1)
output as CCEE              EC

finally, return temporary

OUTPUT
The output shows the solution of cannibals and explorers problem’s solutions 
So, the left side is the initial state of the cannibals and the exploders where both cannibals and explorers are 3 each, which is a valid state.
The steps are as follows:
•	The boat goes on the right side with 1 Cannibal and 1 Explorer
•	returns back to left with 1 Explorer 
•	2 Cannibals goes to right side leaving 3 Explorers on left and 3 Cannibals on right side
•	1 Cannibal comes back to left side and 2 Explorers goes to the right side
•	1 Explorer and 1 Cannibal comes back to the left side leaving 1 Explorer and 1 Cannibal on the right
•	2 Explorers goes to the right side leaving 2 Cannibals on left 
•	1 Cannibals goes back to left which makes 3 Cannibals on left and 3 Explorers on the right side 
•	2 Cannibals goes to right and leaves 1 Cannibal on the right side
•	1 Cannibal goes back to get the last Cannibals
•	Both Cannibals goes to the right side 
•	All 3 Cannibals and 3 Explorers are on the right side
