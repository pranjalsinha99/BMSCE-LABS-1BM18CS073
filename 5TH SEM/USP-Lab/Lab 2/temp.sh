
echo "Enter temperature in Farheniet : "
read tempf

tempc=$(echo "scale=2;(5/9)*($tempf-32)"|bc)
echo "$tempf °F = $tempc °C"
