#include"eu0229.h"

#include"principal.h"

void eu0229 :: solucion(){
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


void eu0229 :: printsolution(){
	cout << "Euler 0229\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
