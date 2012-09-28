#include"eu0338.h"

#include"principal.h"

void eu0338 :: solucion(){
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


void eu0338 :: printsolution(){
	cout << "Euler 0338\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
