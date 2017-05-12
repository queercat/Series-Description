all:
	g++ series.cpp -o desc

out:
	./desc< inSmall.txt > out.txt
	vim out.txt

test:
	./desc< inSmall.txt > out.txt
	diff out.txt outSmallExpected.txt
