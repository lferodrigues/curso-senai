/* UPDATE `Aluno`
	SET `Nome` = 'Ana Maria'
WHERE `idAluno` = 6; */

/* select *
	from `Aluno`
Where `Cidade` = 'Sao Joao Nepomuceno' */

/* DELETE
	FROM `Aluno`
WHERE `idAluno` = 7; */ 

/* SELECT *
	FROM `Aluno`
ORDER BY `Nome`; */

SELECT `idAluno`,`Nome`,`Cidade`,`CEP`
	FROM `Aluno`
ORDER BY `Nome`,`Cidade`;