#include"eu0332.h"

#include"principal.h"

void eu0332 :: solucion(){
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


void eu0332 :: printsolution(){
	cout << "Euler 0332\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
