SELECT categories.name, sum(products.amount) AS sum
FROM products
JOIN categories ON products.id_categories = categories.id
GROUP BY categories.name;