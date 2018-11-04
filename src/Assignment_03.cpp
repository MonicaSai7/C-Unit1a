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
// XOR with n'th prime number
// and subtract 1
//
// output the encode numbers in encodedMessage[8] array.
//
// e.g:
// for 5'th prime
// encoding will be
// (message[i] ^ 11) - 1
// since 11 is the 5'th prime. // 2, 3, 5, 7, 11...
//
void encodeWithNthPrime(int message[8], int n, int encodedMessage[8]) {
    
}

//
// decode an array of numbers in
// which are encoded using above encodeWithPrime function.
//
// output the decoded numbers in decodedMessage[8] array.
//
void decodeWithNthPrime(int message[8], int n, int decodedMessage[8]) {
    
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
//
// The reserved bits should be set to zero.
//
// For the context refer:
// https://en.wikipedia.org/wiki/Transmission_Control_Protocol#TCP_segment_structure
//
unsigned int packHeader(int fromMobileId, int toMobileId, int msgId,
                        int msgLen, bool urgent, bool adHoc) {
    return 0;
}

// unpack a given header, with the properties like the above
void unpackHeader(unsigned int header, int *pFromMobileId, int *pToMobileId,
                  int *pMsgId, int *pMsgLen, bool *pUrgent, bool *pAdHoc) {
    
}
