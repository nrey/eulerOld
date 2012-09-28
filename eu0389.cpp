#include"eu0389.h"

#include"principal.h"

void eu0389 :: solucion(){
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


void eu0389 :: printsolution(){
	cout << "Euler 0389\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
