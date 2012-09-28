#include"eu0125.h"

#include"principal.h"

void eu0125 :: solucion(){
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


void eu0125 :: printsolution(){
	cout << "Euler 0125\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
