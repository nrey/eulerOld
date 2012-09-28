#include"eu0385.h"

#include"principal.h"

void eu0385 :: solucion(){
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


void eu0385 :: printsolution(){
	cout << "Euler 0385\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
