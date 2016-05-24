using namespace std;

#include <fstream>
#include <iostream>
#include <vector>

/*
int main()
{
	
	int n = 42;
	// write to file
	{
		ofstream fout("d:\\test.bin", ios::binary);
		fout.write(reinterpret_cast<char*>(&n), sizeof n);
		cout << "value written: " << n << '\n';
	}

	// read from file
	{
		ifstream fin("d:\\test.bin", ios::binary);
		int m;
		fin.read(reinterpret_cast<char*>(&m), sizeof m);
		cout << "value read back: " << m << '\n';
	}

	int xx;
	cin >> xx;
}

int main(int argc, char *argv[]){
	char ch;

	ifstream in("d:\\test.bin", ios::in | ios::binary);
	if (!in){
		cout << "Cannot open file.";
		return 1;
	}
	while (in){
		in.get(ch);
		cout << ch;
	}

	int xx;
	cin >> xx;
	}*/