#include"eu0197.h"

#include"principal.h"

void eu0197 :: solucion(){
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


void eu0197 :: printsolution(){
	cout << "Euler 0197\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
