-- script for Mysql
CREATE DATABASE IF NOT EXISTS pizzeria;
USE pizzeria;

DROP TABLE IF EXISTS comments;
DROP TABLE IF EXISTS ingredient;
DROP TABLE IF EXISTS users;
DROP TABLE IF EXISTS pizza;

CREATE TABLE users (
	id char(36) PRIMARY KEY,
	user_name varchar(36) NOT NULL,
    surname varchar(36) NOT NULL,
    mail varchar(255),
    passwd varchar(255)
);

CREATE TABLE pizza (
	id char(36) PRIMARY KEY,
	pizza_name varchar(20) NOT NULL,
    photo blob,
    precio decimal
);

CREATE TABLE ingredient (
	id char(36) PRIMARY KEY,
	ingredient_name varchar(36) NOT NULL,
    pizzaId char(36),
    precio decimal,
    FOREIGN KEY (pizzaId) REFERENCES pizza(id)
);

CREATE TABLE comments (
	id char(36) PRIMARY KEY,
	comment_text varchar(36) NOT NULL,
    score int NOT NULL,
    comment_date date,
    userId char(36),
    pizzaId char(36),
    FOREIGN KEY (userId) REFERENCES users(id),
    FOREIGN KEY (pizzaId) REFERENCES pizza(id)
);	

DELETE FROM pizza;
DELETE FROM ingredient;
DELETE FROM comments;
DELETE FROM users;

INSERT INTO users(id,user_name,surname,mail,passwd) VALUES (uuid(),'Guillermo', 'Ferrer', 'guillermo198@gmail.com','pepepepito');
INSERT INTO pizza(id,pizza_name,photo,precio) VALUES (uuid(),'Hawaiana','1',12.2);
INSERT INTO ingredient(id,ingredient_name,pizzaId,precio) VALUES (uuid(),'Piña',(SELECT id FROM pizza WHERE pizza_name = "Hawaiana"),1.2);
INSERT INTO comments(id,comment_text,score,comment_date,userId,pizzaId) VALUES(uuid(),"¡Esta pizza es una herejia!",0,now(),(SELECT id FROM users WHERE user_name = "Guillermo"),(SELECT id FROM pizza WHERE pizza_name = "Hawaiana"));