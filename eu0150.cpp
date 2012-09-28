#include"eu0150.h"

#include"principal.h"

void eu0150 :: solucion(){
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


void eu0150 :: printsolution(){
	cout << "Euler 0150\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
