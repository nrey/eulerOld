#include"eu0109.h"

#include"principal.h"

void eu0109 :: solucion(){
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


void eu0109 :: printsolution(){
	cout << "Euler 0109\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
