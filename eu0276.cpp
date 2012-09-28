#include"eu0276.h"

#include"principal.h"

void eu0276 :: solucion(){
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


void eu0276 :: printsolution(){
	cout << "Euler 0276\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
