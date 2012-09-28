#include"eu0270.h"

#include"principal.h"

void eu0270 :: solucion(){
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


void eu0270 :: printsolution(){
	cout << "Euler 0270\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
