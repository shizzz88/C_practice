/*
 ============================================================================
 Name        : C_practice.c
 Author      : Shahzad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "struct_test.h"

int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	/*double m;
	int s,a;
	s_main p1;

	initstruct(&p1);
	m = multiply(&p1);
	a = addition(&p1);
	s = subtraction(&p1);

	printf("The Multiplication result is %f\nThe addition result is %d\nThe subtraction result is %d\n",m,a,s);*/
	int p,n;
	int x,y,z;
	x = 4;
	y = 3;
	z = x-- -y;
	p = 0;
	float r,si;
	int l,*m,**o;
	l = 200;
	m = &l;
	o = &m;
	**o = 100;
	/*printf("Enter the value of p");
	scanf("%d", &p);
	printf("Enter the value of n");
	scanf("%d", &n);
	printf("Enter the value of r");
	scanf("%f", &r);
	si = p*n*r/100;
	printf("%f", si);
	printf("nn/n/n \n");
	scanf("%d %d", &p, &n);*/
	/*************************************************/
	//while loop is edited here
	// second change
	// third change from home
	//while loops
	/*while(p<10){
		p+=1;
		//printf("%d\n",p);
		printf("\n%d%d%d",x,y,z);
	}*/
	/****************************************************/
	printf("The address is %u\n", &o);
	printf("the value is %d", **o);

	return EXIT_SUCCESS;
}
