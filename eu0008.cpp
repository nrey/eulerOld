#include"eu0008.h"

#include"principal.h"

void eu0008 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_1d_1 = new unsigned long long [5];
	
	// ---------------------------------------------------- //
	
	myfile_read_1.open("eu0008_data.txt");
	myfile_read_1.setf( ios::fixed );

	char uu[2];
	myfile_read_1.get(uu, 2);
	tem_1d_1[0] = strtold(uu,0);
	myfile_read_1.get(uu, 2);
	tem_1d_1[1] = strtold(uu,0);
	myfile_read_1.get(uu, 2);
	tem_1d_1[2] = strtold(uu,0);
	myfile_read_1.get(uu, 2);
	tem_1d_1[3] = strtold(uu,0);
		
	for( unsigned int i=4; i<1000; i++ ){
		myfile_read_1.get(uu, 2);
		tem_1d_1[i%5] = strtold(uu,0);
		
		temp_1 = tem_1d_1[0]*tem_1d_1[1]*tem_1d_1[2]*tem_1d_1[3]*tem_1d_1[4];
		if( output < temp_1 ){
			output = temp_1;
		}
	}
	myfile_read_1.close(); 
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0008 :: printsolution(){
	cout << "Euler 0008\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
