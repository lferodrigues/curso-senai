/*
ALTER TABLE `Aluno`
	ADD COLUMN `idTurma` INT NOT NULL;
 */
 ALTER TABLE `Aluno`
	ADD FOREIGN KEY `fk_aluno_as_turma` (`idTurma`)
	REFERENCES `Turma` (`idTurma`)
	ON DELETE RESTRICT;