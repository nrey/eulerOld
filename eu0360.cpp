#include"eu0360.h"

#include"principal.h"

void eu0360 :: solucion(){
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


void eu0360 :: printsolution(){
	cout << "Euler 0360\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
