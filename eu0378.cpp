#include"eu0378.h"

#include"principal.h"

void eu0378 :: solucion(){
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


void eu0378 :: printsolution(){
	cout << "Euler 0378\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
