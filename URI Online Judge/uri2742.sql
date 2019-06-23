select life.name, round((life.omega*1.618),3) AS "Fator N"
from life_registry life
inner join dimensions dim on life.dimensions_id = dim.id
where dim.name in ('C875', 'C774')
and life.name like 'Richar%'
order by 2