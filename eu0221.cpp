#include"eu0221.h"

#include"principal.h"

void eu0221 :: solucion(){
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


void eu0221 :: printsolution(){
	cout << "Euler 0221\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
