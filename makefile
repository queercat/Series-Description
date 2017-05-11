all:
	g++ series.cpp -o desc

test:
	./desc.exe < inSmall.txt > outSmall.txt
	diff outSmall.txt outSmallExpected.txt
