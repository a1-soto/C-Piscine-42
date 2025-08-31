FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | sed 's/#.s//' | awk "NR % 2 == 1" |  awk -F : '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
