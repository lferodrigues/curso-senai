SELECT `a`.`idAluno` as `Matricula`, `a`.`Nome`,
	   `t`.`Sala`, `t`.`idTurma` as `Cód. Turma`
	FROM `Aluno` as `a`
INNER JOIN `Turma` as `t`
	ON `a`.`idTurma` = `t`.`idTurma`
ORDER BY `a`.`Nome`, `a`.`idAluno`;