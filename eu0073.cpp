#include"eu0073.h"

#include"principal.h"

void eu0073 :: solucion(){
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


void eu0073 :: printsolution(){
	cout << "Euler 0073\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
