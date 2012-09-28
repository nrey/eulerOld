#include"eu0248.h"

#include"principal.h"

void eu0248 :: solucion(){
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


void eu0248 :: printsolution(){
	cout << "Euler 0248\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
