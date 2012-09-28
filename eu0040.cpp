#include"eu0040.h"

#include"principal.h"

void eu0040 :: solucion(){
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


void eu0040 :: printsolution(){
	cout << "Euler 0040\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
