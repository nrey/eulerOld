#include"eu0237.h"

#include"principal.h"

void eu0237 :: solucion(){
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


void eu0237 :: printsolution(){
	cout << "Euler 0237\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
