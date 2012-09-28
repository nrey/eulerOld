#include"eu0283.h"

#include"principal.h"

void eu0283 :: solucion(){
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


void eu0283 :: printsolution(){
	cout << "Euler 0283\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
