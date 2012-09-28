#include"eu0164.h"

#include"principal.h"

void eu0164 :: solucion(){
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


void eu0164 :: printsolution(){
	cout << "Euler 0164\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
