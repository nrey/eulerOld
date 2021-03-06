#include"eu0007.h"

#include"principal.h"

void eu0007 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	temp_1 = 2;
	temp_2 = 5;
	while( temp_1 < 10001 ){
		
		if( isprime(&temp_2) ){
			temp_1++;
			output = temp_2;
		}
		
		temp_2 = temp_2 + 2;
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0007 :: printsolution(){
	cout << "Euler 0007\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
