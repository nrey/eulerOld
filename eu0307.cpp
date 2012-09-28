#include"eu0307.h"

#include"principal.h"

void eu0307 :: solucion(){
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


void eu0307 :: printsolution(){
	cout << "Euler 0307\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
