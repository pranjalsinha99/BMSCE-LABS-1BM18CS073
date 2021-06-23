echo "Enter side of square"
read l

area=$(echo "$l*$l"|bc)
echo $area
