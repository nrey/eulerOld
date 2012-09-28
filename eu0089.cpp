#include"eu0089.h"

#include"principal.h"

void eu0089 :: solucion(){
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


void eu0089 :: printsolution(){
	cout << "Euler 0089\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
