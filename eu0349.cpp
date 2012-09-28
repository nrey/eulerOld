#include"eu0349.h"

#include"principal.h"

void eu0349 :: solucion(){
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


void eu0349 :: printsolution(){
	cout << "Euler 0349\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
