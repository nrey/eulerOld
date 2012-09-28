#include"eu0171.h"

#include"principal.h"

void eu0171 :: solucion(){
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


void eu0171 :: printsolution(){
	cout << "Euler 0171\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
