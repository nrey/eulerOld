#include"eu0361.h"

#include"principal.h"

void eu0361 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0361 :: printsolution(){
	cout << "Euler 0361\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
