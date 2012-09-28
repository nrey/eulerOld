#include"eu0105.h"

#include"principal.h"

void eu0105 :: solucion(){
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


void eu0105 :: printsolution(){
	cout << "Euler 0105\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
