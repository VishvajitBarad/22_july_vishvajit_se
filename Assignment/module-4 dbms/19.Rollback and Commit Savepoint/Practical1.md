Lab 1: Perform a transaction where you create a savepoint, insert records, then rollback to
the savepoint.

```
-- Step 1: Start a transaction
BEGIN;

-- Step 2: Insert some records into the table (for example, the 'employees' table)
INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (1, 'param', 60000, 'IT');

INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (2, 'dev', 40000, 'HR');

-- Step 3: Create a savepoint after the inserts
SAVEPOINT my_savepoint;

-- Step 4: Insert more records (these will be rolled back later)
INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (3, 'hardik', 55000, 'Finance');

INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (4, 'savan', 70000, 'Marketing');

-- Step 5: Rollback to the savepoint, undoing the last two insertions
ROLLBACK TO SAVEPOINT my_savepoint;

-- Step 6: Commit the transaction, making the changes before the savepoint permanent
COMMIT;

```