/*
CREATE TABLE IF NOT EXISTS `Funcionario` (
`idfuncionario` INT NOT NULL AUTO_INCREMENT,
`Nome` VARCHAR(45) NOT NULL,
`Endereço` VARCHAR(45) NOT NULL,
`Cidade` VARCHAR(45) NOT NULL,
`Estado` CHAR(2),
`CPF` VARCHAR(11),
`CEP` INT,
`E-mail` VARCHAR(45),

PRIMARY KEY(`idfuncionario`)
)
ENGINE = InnoDB;
*/

CREATE TABLE IF NOT EXISTS `Departamento` (

`idDepartamento` INT NOT NULL AUTO_INCREMENT,
`Descrição` VARCHAR(45) NOT NULL,

PRIMARY KEY(`idDepartamento`)
)
ENGINE = InnoDB;