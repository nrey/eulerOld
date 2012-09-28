#include"eu0010.h"

#include"principal.h"

void eu0010 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	temp_1 = 5;
	output = 5;
	while( temp_1 < 2000000 ){
		if( isprime( &temp_1 ) ){
			output += temp_1;
		}
		temp_1 += 2;
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0010 :: printsolution(){
	cout << "Euler 0010\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
