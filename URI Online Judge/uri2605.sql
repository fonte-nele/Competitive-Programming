SELECT products.name, providers.name
FROM providers, products, categories
WHERE products.id_categories = 6
and products.id_providers = providers.id
and categories.name = 'executive';