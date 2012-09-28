#include"eu0257.h"

#include"principal.h"

void eu0257 :: solucion(){
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


void eu0257 :: printsolution(){
	cout << "Euler 0257\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
