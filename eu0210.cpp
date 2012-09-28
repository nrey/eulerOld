#include"eu0210.h"

#include"principal.h"

void eu0210 :: solucion(){
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


void eu0210 :: printsolution(){
	cout << "Euler 0210\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
