#include "stdafx.h"

// helper method
bool areEqualArrays(int a[], int b[], int size){
	for (int i = 0; i < size; i++){
		if (a[i] != b[i])
			return false;
	}
	return true;
}
