echo "Enter a Number:"
read input

rem=$(( $input % 2 ))

if [ $rem -eq 0 ]
then
    echo "$input is even"
else
    echo "$input is odd"
fi
