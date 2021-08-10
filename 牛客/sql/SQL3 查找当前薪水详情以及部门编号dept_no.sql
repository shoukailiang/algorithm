SELECT salaries.emp_no,salary,from_date,salaries.to_date,dept_no FROM salaries,dept_manager WHERE salaries.emp_no = dept_manager.emp_no
ORDER BY salaries.emp_no ASC;