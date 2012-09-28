#include"eu0335.h"

#include"principal.h"

void eu0335 :: solucion(){
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


void eu0335 :: printsolution(){
	cout << "Euler 0335\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
