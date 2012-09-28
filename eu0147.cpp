#include"eu0147.h"

#include"principal.h"

void eu0147 :: solucion(){
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


void eu0147 :: printsolution(){
	cout << "Euler 0147\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
