#include"eu0275.h"

#include"principal.h"

void eu0275 :: solucion(){
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


void eu0275 :: printsolution(){
	cout << "Euler 0275\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
