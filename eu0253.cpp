#include"eu0253.h"

#include"principal.h"

void eu0253 :: solucion(){
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


void eu0253 :: printsolution(){
	cout << "Euler 0253\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
