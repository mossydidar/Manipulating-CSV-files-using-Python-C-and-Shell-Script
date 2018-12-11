printf "Press 1 to search for City:\n%s";
printf "Press 2 to search for Day:\n%s";
printf "Press 3 to search for Month:\n%s";
printf "Press 4 to search for Year:\n%s";

read choice;
printf " $choice \n%s";


if [ $choice -eq 1 ]
then
printf "please enter City name to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$2 == patt' data1.csv
fi

if [ $choice -eq 2 ]
then
printf "please enter Day to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$11 == patt' data1.csv
fi

if [ $choice -eq 3 ]
then
printf "please enter Month to search. 1=Jan, 2=Feb, 3= Mar:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$10 == patt' data1.csv
fi

if [ $choice -eq 4 ]
then
printf "please enter Year to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$9 == patt' data1.csv
fi