#include"eu0351.h"

#include"principal.h"

void eu0351 :: solucion(){
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


void eu0351 :: printsolution(){
	cout << "Euler 0351\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
