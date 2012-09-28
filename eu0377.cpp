#include"eu0377.h"

#include"principal.h"

void eu0377 :: solucion(){
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


void eu0377 :: printsolution(){
	cout << "Euler 0377\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
