#include"eu0225.h"

#include"principal.h"

void eu0225 :: solucion(){
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


void eu0225 :: printsolution(){
	cout << "Euler 0225\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
