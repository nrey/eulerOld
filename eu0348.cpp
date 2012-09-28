#include"eu0348.h"

#include"principal.h"

void eu0348 :: solucion(){
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


void eu0348 :: printsolution(){
	cout << "Euler 0348\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
