#include"eu0341.h"

#include"principal.h"

void eu0341 :: solucion(){
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


void eu0341 :: printsolution(){
	cout << "Euler 0341\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
