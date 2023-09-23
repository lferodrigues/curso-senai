/*ALTER TABLE `departamento`
	 ADD COLUMN `Area` VARCHAR(15) NOT NULL DEFAULT 'OPERACIONAL'; */

/*
ALTER TABLE `funcionario`
	 ADD COLUMN `idDepartamento` INT NOT NULL;

*/

 
 /*
 ALTER TABLE `funcionario`
	ADD FOREIGN KEY `fk_funcionario_as_departamento` (`idDepartamento`)
	REFERENCES `Departamento` (`idDepartamento`)
	ON DELETE RESTRICT;
*/

/*
ALTER TABLE `funcionario`
		CHANGE COLUMN `Estado` `UF` CHAR(2) NOT NULL;
  */ 

/*
ALTER TABLE `funcionario`
	ADD UNIQUE INDEX `fx_nome` (`Nome` ASC, `idfuncionario` ASC);
*/

/*
ALTER TABLE `funcionario`
	ADD UNIQUE INDEX `fx_nome_decrescente` (`Nome` DESC, `idfuncionario` DESC);  
*/ 
 
ALTER TABLE `funcionario`
	DROP INDEX `fx_nome_decrescente`; 