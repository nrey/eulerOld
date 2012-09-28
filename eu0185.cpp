#include"eu0185.h"

#include"principal.h"

void eu0185 :: solucion(){
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


void eu0185 :: printsolution(){
	cout << "Euler 0185\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
