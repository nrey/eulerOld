#include"eu0315.h"

#include"principal.h"

void eu0315 :: solucion(){
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


void eu0315 :: printsolution(){
	cout << "Euler 0315\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
