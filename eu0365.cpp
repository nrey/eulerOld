#include"eu0365.h"

#include"principal.h"

void eu0365 :: solucion(){
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


void eu0365 :: printsolution(){
	cout << "Euler 0365\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
