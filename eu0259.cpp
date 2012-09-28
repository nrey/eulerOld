#include"eu0259.h"

#include"principal.h"

void eu0259 :: solucion(){
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


void eu0259 :: printsolution(){
	cout << "Euler 0259\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
