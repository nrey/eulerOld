#include"eu0212.h"

#include"principal.h"

void eu0212 :: solucion(){
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


void eu0212 :: printsolution(){
	cout << "Euler 0212\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
