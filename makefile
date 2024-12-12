default: part1

part1:
	g++ $(shell find ./src -name "*.cpp" -not -name "part2.cpp") -o ./bin/part1
	./bin/part1

part2:
	g++ $(shell find ./src -name "*.cpp" -not -name "part1.cpp") -o ./bin/part2
	./bin/part2
