#include"eu0145.h"

#include"principal.h"

void eu0145 :: solucion(){
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


void eu0145 :: printsolution(){
	cout << "Euler 0145\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
