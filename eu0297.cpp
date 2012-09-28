#include"eu0297.h"

#include"principal.h"

void eu0297 :: solucion(){
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


void eu0297 :: printsolution(){
	cout << "Euler 0297\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
