#include"eu0366.h"

#include"principal.h"

void eu0366 :: solucion(){
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


void eu0366 :: printsolution(){
	cout << "Euler 0366\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
