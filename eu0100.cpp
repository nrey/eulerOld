#include"eu0100.h"

#include"principal.h"

void eu0100 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	for( unsigned long long i=3; i<30; ++i ){
		tedo_1 = i/sqrt(2);
		temp_2 = ceil(tedo_1);
		temp_3 = floor(tedo_1);
		cout<<endl<<i<<" "<<temp_2<< " " <<tedo_1;
		if( (i*(i-1))%(temp_2*temp_3*2)==0)
		{
			output = i;
			cout<<endl<<"asd";
		}
		i /4
		o
		i-1 /4
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0100 :: printsolution(){
	cout << "Euler 0100\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
