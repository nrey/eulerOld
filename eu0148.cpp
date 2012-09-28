#include"eu0148.h"

#include"principal.h"

void eu0148 :: solucion(){
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


void eu0148 :: printsolution(){
	cout << "Euler 0148\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
