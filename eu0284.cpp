#include"eu0284.h"

#include"principal.h"

void eu0284 :: solucion(){
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


void eu0284 :: printsolution(){
	cout << "Euler 0284\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
