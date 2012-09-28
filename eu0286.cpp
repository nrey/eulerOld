#include"eu0286.h"

#include"principal.h"

void eu0286 :: solucion(){
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


void eu0286 :: printsolution(){
	cout << "Euler 0286\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
