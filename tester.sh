make
clear
./generator/generator $1 $2 $3 > map.txt
echo "--------------------------[MAZE GENERATED]--------------------------"
cat map.txt
echo ""
echo "---------------------------[MAZE SOLVED]----------------------------"
./solver/solver map.txt
rm map.txt
