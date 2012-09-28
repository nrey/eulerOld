#include"eu0381.h"

#include"principal.h"

void eu0381 :: solucion(){
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


void eu0381 :: printsolution(){
	cout << "Euler 0381\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
