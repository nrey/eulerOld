#include"eu0326.h"

#include"principal.h"

void eu0326 :: solucion(){
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


void eu0326 :: printsolution(){
	cout << "Euler 0326\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
