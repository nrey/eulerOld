#include"eu0334.h"

#include"principal.h"

void eu0334 :: solucion(){
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


void eu0334 :: printsolution(){
	cout << "Euler 0334\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
