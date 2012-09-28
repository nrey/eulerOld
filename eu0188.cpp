#include"eu0188.h"

#include"principal.h"

void eu0188 :: solucion(){
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


void eu0188 :: printsolution(){
	cout << "Euler 0188\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
