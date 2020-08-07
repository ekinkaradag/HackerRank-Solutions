/*
Enter your query here.
*/

SELECT N,
CASE
    WHEN N IN (SELECT N FROM BST WHERE P IS NUll) THEN "Root"
    WHEN N IN (SELECT P FROM BST) THEN "Inner"
    ELSE "Leaf"
END 
FROM BST
ORDER BY N