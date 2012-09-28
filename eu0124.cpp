#include"eu0124.h"

#include"principal.h"

void eu0124 :: solucion(){
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


void eu0124 :: printsolution(){
	cout << "Euler 0124\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
