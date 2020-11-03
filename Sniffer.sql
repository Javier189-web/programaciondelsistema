--CREATE DATABASE Sniffer
---------------------------------------
use Sniffer
go
CREATE TABLE Datos
(
	IpAddress VARCHAR(20),
	Puerto VARCHAR(10),
	IpDestino VARCHAR(25),
	Protocolo VARCHAR(15), 
	Datos TEXT
)

-----------------------------------------
use Sniffer
go
SELECT * from Datos

------------------------------------------

ALTER TABLE dbo.Datos DROP COLUMN Puerto;

--------------------------------------------

ALTER TABLE dbo.Datos ADD Datos TEXT;

ALTER TABLE dbo.Datos ADD Puerto Varchar(10);

---------
DROP TABLE Datos;
-------------------------------------------------

truncate table Datos ---Borrar todas las filas

---------------------------------------------

SELECT E.N_PARTE, COUNT(E.N_PARTE) AS REPETIDOS




