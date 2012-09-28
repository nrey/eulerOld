#include"eu0379.h"

#include"principal.h"

void eu0379 :: solucion(){
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


void eu0379 :: printsolution(){
	cout << "Euler 0379\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
