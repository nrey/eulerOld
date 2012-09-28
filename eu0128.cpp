#include"eu0128.h"

#include"principal.h"

void eu0128 :: solucion(){
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


void eu0128 :: printsolution(){
	cout << "Euler 0128\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
