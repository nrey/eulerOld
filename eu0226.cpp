#include"eu0226.h"

#include"principal.h"

void eu0226 :: solucion(){
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


void eu0226 :: printsolution(){
	cout << "Euler 0226\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
