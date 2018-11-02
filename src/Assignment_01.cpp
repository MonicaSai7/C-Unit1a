/*
Note:
1. Read instructions for each function carefully.
2. Feel free to create new functions if needed. Give good names!
3. Check the reference links when ever given.
4. After solving the question and making corresponding test cases pass
   - reflect on where is the gap in your understanding, while solving the problem.
   - if you have to create a similar problem, how would you do/tweek it?
   - when your friends seek help, instead of explaining your logic,
     give hints to solve. Always.
*/

//
// butterfly number for the given integer
//
// e.g:
// 20  => "2002"
// -2  => "-22-"
//
// To get butterfly number for the given number 20,
// take its reversal 02 and join them to form "2002".
//
void butterflyNumber(int n, char butterfly[23]) {
    
}

//
// Write a function that finds the positive integers up to 100
// that are palindromes in base b
//
// b > 1
//
// saves a list of base–10 numbers less than or equal to 100
// that are palindromic in base b.
// and return the count.
//
// e.g:
// 10 => { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99}, 18 palindromes
// 2  => { 1, 3, 5, 7, 9, 15, 17, 21, 27, 31, 33, 45, 51, 63, 65, 73, 85, 93, 99}, 19 palindromes
//
// Once you have completed this function, check this reference.
// Ref: http://www.worldofnumbers.com/nobase10.htm
//
int palindromeNumbers(int b, int numbers[]) {
    return -999;
}

//
// Write a function that finds the closest (to n) 5 positive integers
// that are even
//
// return a sorted list of assending order even numbers (greater than zero).
//
// Note:
// In case of conflict return the smallest number.
// let us say for the 5th element, 2 numbers are at same distance from n.
// then include the smallest of the 2 numbers.
//
// e.g:
// 14  => { 8, 10, 12, 16, 18}; // 8 and 20 are at equal distance from 14, we pick 8.
// 15  => { 10, 12, 14, 16, 18}; // 10 and 20 are at equal distance from 15, we pick 10.
//
// Ref: https://en.wikipedia.org/wiki/Parity_of_zero
//
// Note: You must return only numbers which are greater than zero.
//
void closest5EvenNumbers(int n, int evens[5]) {
    
}

//
// Write a function that finds the closest 5 positive integers
// that are palindromes in base b.
//
// b > 1
//
// return a sorted list of assending order.
//
// Note:
// 1. In case of conflict return the smallest number.
//    let us say for the 5th element, 2 numbers are at same distance from n.
//    then include the smallest of the 2 numbers.
// 2. Palindromes must be greater than zero.
//    for i = 0 to 4, palindromes[i] > 0.
//
void closest5PalindromeNumbers(int n, int b, int palindromes[5]) {
    
}
