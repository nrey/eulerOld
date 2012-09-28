#include"eu0252.h"

#include"principal.h"

void eu0252 :: solucion(){
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


void eu0252 :: printsolution(){
	cout << "Euler 0252\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
