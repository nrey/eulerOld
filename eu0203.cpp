#include"eu0203.h"

#include"principal.h"

void eu0203 :: solucion(){
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


void eu0203 :: printsolution(){
	cout << "Euler 0203\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
