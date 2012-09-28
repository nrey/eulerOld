#include"eu0343.h"

#include"principal.h"

void eu0343 :: solucion(){
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


void eu0343 :: printsolution(){
	cout << "Euler 0343\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
