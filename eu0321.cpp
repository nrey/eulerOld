#include"eu0321.h"

#include"principal.h"

void eu0321 :: solucion(){
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


void eu0321 :: printsolution(){
	cout << "Euler 0321\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
