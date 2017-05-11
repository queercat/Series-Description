all:
	g++ series.cpp -o desc

out:
	./desc.exe < inSmall.txt

test:
	./desc.exe < inSmall.txt > outSmall.txt
	diff outSmall.txt outSmallExpected.txt
