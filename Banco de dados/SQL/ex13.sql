SELECT `Cidade`, COUNT(*) as `Alunos por Cidade`
	FROM `Aluno`
GROUP BY `Cidade`;