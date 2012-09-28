#include"eu0277.h"

#include"principal.h"

void eu0277 :: solucion(){
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


void eu0277 :: printsolution(){
	cout << "Euler 0277\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
