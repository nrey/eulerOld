#include"eu0328.h"

#include"principal.h"

void eu0328 :: solucion(){
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


void eu0328 :: printsolution(){
	cout << "Euler 0328\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
