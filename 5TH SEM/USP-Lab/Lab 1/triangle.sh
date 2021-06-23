echo "Enter the base and height of the triangle"
read b
read h
area=$(echo "0.5*$b*$h"|bc)
echo $area
