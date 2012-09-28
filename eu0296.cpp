#include"eu0296.h"

#include"principal.h"

void eu0296 :: solucion(){
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


void eu0296 :: printsolution(){
	cout << "Euler 0296\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
