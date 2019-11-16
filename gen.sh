#!/bin/bash
ARRAY=(a b c d e f g h i l m n o p q r s t u v z)

for ((i=0;i<5;i++)) do
for ((c=0;c<5;c++)) do
for ((j=0;j<5;j++)) do
for ((k=0;k<5;k++)) do

parola="${ARRAY[$i]} ${ARRAY[$c]} ${ARRAY[$j]} ${ARRAY[$k]}"

echo $parola

done
done
done
echo -e "\n"
done
