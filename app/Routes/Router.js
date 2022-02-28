const express = require('express');
const Router = express.Router();

const user = require("./User");
const character = require("./Character");
const movie = require("./Movie");

//Rutas
user(Router);
character(Router);
movie(Router);

module.exports = Router;