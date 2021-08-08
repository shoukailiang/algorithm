SELECT * FROM employees WHERE hire_date= (
    SELECT DISTINCT hire_date FROM employees ORDER BY hire_date DESC  LIMIT 1 OFFSET 2
)