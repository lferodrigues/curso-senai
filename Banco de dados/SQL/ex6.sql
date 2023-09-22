/*

ALTER TABLE `Aluno`
	ADD UNIQUE INDEX `fx_nome` (`Nome` ASC, `idAluno` ASC);
*/

/*
ALTER TABLE `Aluno`
	ADD UNIQUE INDEX `fx_nome_decrescente` (`Nome` DESC, `idAluno` DESC);
*/  
ALTER TABLE `Aluno`
	DROP INDEX `fx_nome_decrescente`;
  
