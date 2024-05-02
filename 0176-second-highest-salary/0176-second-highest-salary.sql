# Write your MySQL query statement below
SELECT
CASE
    WHEN (
        SELECT COUNT(DISTINCT salary) 
        FROM Employee
    ) > 1 THEN (
        SELECT DISTINCT salary
        FROM Employee
        ORDER BY salary DESC
        LIMIT 1 OFFSET 1
    )
    ELSE NULL
END
AS SecondHighestSalary;