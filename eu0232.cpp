#include"eu0232.h"

#include"principal.h"

void eu0232 :: solucion(){
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


void eu0232 :: printsolution(){
	cout << "Euler 0232\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
