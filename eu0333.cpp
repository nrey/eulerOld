#include"eu0333.h"

#include"principal.h"

void eu0333 :: solucion(){
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


void eu0333 :: printsolution(){
	cout << "Euler 0333\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
