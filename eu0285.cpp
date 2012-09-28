#include"eu0285.h"

#include"principal.h"

void eu0285 :: solucion(){
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


void eu0285 :: printsolution(){
	cout << "Euler 0285\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
