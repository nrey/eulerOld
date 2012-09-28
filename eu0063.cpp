#include"eu0063.h"

#include"principal.h"

void eu0063 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	infivar_1 = new infinite_precition(30);
	
	temp_1 = 0;
	for( unsigned long long i=2; i<10; i++ ){
		infivar_1->setvalue(i);
		temp_2 = 1;
		while( infivar_1->numdig() == temp_2 ){//&& infivar_1->numdig()<9 ){
			temp_1++;
			infivar_1->mul(infivar_1,i);
			temp_2++;
		}
		temp_1--;
			
	}
	output = temp_1 + 9; // los 9 son los numeros de 1 a 9, 1^1, 2^1, ... 9^1
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0063 :: printsolution(){
	cout << "Euler 0063\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
