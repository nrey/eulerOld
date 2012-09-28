#include"eu0355.h"

#include"principal.h"

void eu0355 :: solucion(){
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


void eu0355 :: printsolution(){
	cout << "Euler 0355\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
