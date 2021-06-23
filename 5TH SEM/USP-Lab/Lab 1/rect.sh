echo "Enter the length and breadth of the Rectangle"
read l
read b
area=$(echo "$l*$b"|bc)
echo $area
