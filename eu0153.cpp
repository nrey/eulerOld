#include"eu0153.h"

#include"principal.h"

void eu0153 :: solucion(){
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


void eu0153 :: printsolution(){
	cout << "Euler 0153\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
