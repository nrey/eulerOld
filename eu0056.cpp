#include"eu0056.h"

#include"principal.h"

void eu0056 :: solucion(){
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


void eu0056 :: printsolution(){
	cout << "Euler 0056\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
