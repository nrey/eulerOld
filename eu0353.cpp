#include"eu0353.h"

#include"principal.h"

void eu0353 :: solucion(){
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


void eu0353 :: printsolution(){
	cout << "Euler 0353\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
