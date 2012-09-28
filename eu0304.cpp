#include"eu0304.h"

#include"principal.h"

void eu0304 :: solucion(){
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


void eu0304 :: printsolution(){
	cout << "Euler 0304\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
