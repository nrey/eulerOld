#include"eu0211.h"

#include"principal.h"

void eu0211 :: solucion(){
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


void eu0211 :: printsolution(){
	cout << "Euler 0211\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
