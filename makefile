all:
	g++ series.cpp -o desc

out:
	./desc< inSmall.txt

test:
	./desc< inSmall.txt > outSmall.txt
	diff outSmall.txt outSmallExpected.txt
