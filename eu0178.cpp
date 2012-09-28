#include"eu0178.h"

#include"principal.h"

void eu0178 :: solucion(){
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


void eu0178 :: printsolution(){
	cout << "Euler 0178\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
