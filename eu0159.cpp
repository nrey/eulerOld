#include"eu0159.h"

#include"principal.h"

void eu0159 :: solucion(){
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


void eu0159 :: printsolution(){
	cout << "Euler 0159\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
