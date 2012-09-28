#include"eu0263.h"

#include"principal.h"

void eu0263 :: solucion(){
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


void eu0263 :: printsolution(){
	cout << "Euler 0263\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
