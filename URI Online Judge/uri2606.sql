SELECT products.id, products.name FROM products, categories
WHERE categories.name like '%super%' and products.id_categories = categories.id;