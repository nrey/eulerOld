#include"eu0022.h"

#include"principal.h"

void eu0022 :: solucion(){
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


void eu0022 :: printsolution(){
	cout << "Euler 0022\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
