#include"eu0140.h"

#include"principal.h"

void eu0140 :: solucion(){
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


void eu0140 :: printsolution(){
	cout << "Euler 0140\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
