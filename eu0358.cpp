#include"eu0358.h"

#include"principal.h"

void eu0358 :: solucion(){
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


void eu0358 :: printsolution(){
	cout << "Euler 0358\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
