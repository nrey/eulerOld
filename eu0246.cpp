#include"eu0246.h"

#include"principal.h"

void eu0246 :: solucion(){
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


void eu0246 :: printsolution(){
	cout << "Euler 0246\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
