// =================================================================
//
// File: activity.h
// Author:URI JARED GOPAR MORALES_A01709413
// Date:23/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity: o(n)
// =================================================================
unsigned int sumaIterativa(unsigned int num) {
	int suma=0;
    	for (int i=1;i<=num;i++){
        suma+=i; 
    }
    return suma; 
	return 0;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity:o(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int num) {
	if(num==1){ //caso base
        num=1;
    }
    else{ //caso general
        num=num+sumaRecursiva(num-1);
    }
    return num;

    return 0;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity: o(1)
// =================================================================
unsigned int sumaDirecta(unsigned int num) {
    int n=0;
    n=num*(num+1)/2;
    return n;
    return 0;
}

#endif /* ACTIVITY_H */

