/*
 * struct_test.h
 *
 *  Created on: Feb 25, 2014
 *      Author: mshahzad
 */
/*define the prototype of the functions you will be calling later.*/

#ifndef STRUCT_TEST_H_
#define STRUCT_TEST_H_

typedef struct {
	int x;
	int y;
	int z;
	double w;
}s_num;

typedef struct {
	s_num numbers;
	int add;
	int sub;
	double mult;
}s_main;

void initstruct(s_main* p);
double multiply(s_main* p);
int addition(s_main* p);
int subtraction(s_main* p);

#endif /* STRUCT_TEST_H_ */
