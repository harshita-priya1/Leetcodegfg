# Write your MySQL query statement below
SELECT EVENT_DAY AS DAY, EMP_ID, SUM(OUT_TIME-IN_TIME) AS TOTAL_TIME FROM EMPLOYEES
GROUP BY EMP_ID, EVENT_DAY;