default: part1

part1:
	g++ ./src/part1.cpp ./src/crops/crops.cpp -o ./bin/part1
	./bin/part1

part2:
	g++ ./src/part2.cpp ./src/crops/crops.cpp -o ./bin/part2
	./bin/part2
