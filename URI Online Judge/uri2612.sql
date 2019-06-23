SELECT DISTINCT movies.id, movies.name FROM movies
JOIN
genres ON (movies.id_genres = genres.id)
AND genres.description = 'Action'
JOIN movies_actors ON (movies.id = movies_actors.id_movies)
JOIN actors ON (movies_actors.id_actors = actors.id)
AND (actors.name = 'Marcelo Silva' OR actors.name = 'Miguel Silva');