#include"eu0281.h"

#include"principal.h"

void eu0281 :: solucion(){
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


void eu0281 :: printsolution(){
	cout << "Euler 0281\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
