/*
Enter your query here.
*/

select count(CITY) - count(distinct CITY) from STATION;
