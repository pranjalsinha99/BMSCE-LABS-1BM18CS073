echo "Enter the radius of circle whose area and circumference is to be found"
read r
area=$(echo "3.14 * $r *$r"|bc)
echo "area: "$area
circumference=$(echo "2*3.14* $r" |bc)
echo "Circumference: "$circumference
