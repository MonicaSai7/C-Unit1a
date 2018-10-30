//
// Every number repeats twice, except one number.
// Write a function that finds the number that does not repeat.
//
// e.g:
// {11, 8, 11}, 3  => 8
//
int numberWithoutRepeatition(int numbers[], int size) {
    return -999;
}

//
// encode an array of numbers by doing
// XOR with k'th palindrome prime in base b
// and subtract 1
//
// output the encode numbers in encodedMessage[8] array.
//
// e.g:
// for 5'th prime in base 10
// encoding will be
// (message[i] ^ 11) - 1
// since 11 is the 5'th prime in base 10. // 2, 3, 5, 7, 11...
//
void encodeWithPalindromPrime(int message[8], int k, int b, int encodedMessage[8]) {
    
}

//
// decode an array of numbers
// which are encoded using above encodeWithPalindromPrime function.
//
// output the decoded numbers in message[8] array.
//
void decodeWithPalindromPrime(int encodedMessage[8], int k, int b, int message[8]) {
    
}

//
// Encode data and flags in packet header
//
// From Left to Right the data and flags are packed as follows:
// fromMobileId   - 7 bits
// toMobileId     - 7 bits
// msgId          - 7 bits
// msgLen         - 7 bits
// reserved       - 2 bits
// urgent         - 1 flag bit
// adHoc          - 1 flag bit
//
// Note:
// The values will be in the range
// 0 <= fromMobileId, toMobileId, msgId, msgLen <= 127
unsigned int packedHeader(int fromMobileId, int toMobileId, int msgId, int msgLen, bool urgent, bool adHoc) {
    return 0;
}
