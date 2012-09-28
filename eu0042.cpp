#include"eu0042.h"

#include"principal.h"

void eu0042 :: solucion(){
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


void eu0042 :: printsolution(){
	cout << "Euler 0042\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
