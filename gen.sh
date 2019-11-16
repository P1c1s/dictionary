#!/bin/bash

#vettore carattteri
ARRAY=(a b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4 5 6 7 8 9 - _ + ? ! @)

#Lunghezza vettore
end=42

#p1 => n^k con n=end e k=1
for ((a=0;a<$end;a++)) do
parola="${ARRAY[$a]}"
echo $parola
var=$((var+1))
echo -e "\n"
done

#p2 => n^k con n=end e k=2
for ((a=0;a<$end;a++)) do
for ((b=0;b<$end;b++)) do

parola="${ARRAY[$a]} ${ARRAY[$b]}"

echo $parola
var=$((var+1))

done
echo -e "\n"
done

#p3 => n^k con n=end e k=3
for ((a=0;a<$end;a++)) do
for ((b=0;b<$end;b++)) do
for ((c=0;c<$end;c++)) do

parola="${ARRAY[$a]} ${ARRAY[$b]} ${ARRAY[$c]}"

echo $parola
var=$((var+1))

done
done
echo -e "\n"
done

#p4 => n^k con n=end e k=4
for ((a=0;a<$end;a++)) do
for ((b=0;b<$end;b++)) do
for ((c=0;c<$end;c++)) do
for ((d=0;d<$end;d++)) do

parola="${ARRAY[$a]} ${ARRAY[$b]} ${ARRAY[$c]} ${ARRAY[$d]}"

echo $parola
var=$((var+1))

done
done
done
echo -e "\n"
done

#p5 => n^k con n=end e k=5
for ((a=0;a<$end;a++)) do
for ((b=0;b<$end;b++)) do
for ((c=0;c<$end;c++)) do
for ((d=0;d<$end;d++)) do
for ((e=0;e<$end;e++)) do

parola="${ARRAY[$a]} ${ARRAY[$b]} ${ARRAY[$c]} ${ARRAY[$d]} ${ARRAY[$e]}"

echo $parola
var=$((var+1))

done
done
done
done
echo -e "\n"
done


#p5 => n^k con n=end e k=5
for ((a=0;a<$end;a++)) do
for ((b=0;b<$end;b++)) do
for ((c=0;c<$end;c++)) do
for ((d=0;d<$end;d++)) do
for ((e=0;e<$end;e++)) do
for ((f=0;f<$end;f++)) do

parola="${ARRAY[$a]} ${ARRAY[$b]} ${ARRAY[$c]} ${ARRAY[$d]} ${ARRAY[$e]} ${ARRAY[$f]}"

echo $parola
var=$((var+1))

done
done
done
done
done
echo -e "\n"
done

echo $var
