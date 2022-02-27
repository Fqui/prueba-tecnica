const getCharacters = require('../Characters/getCharacters');
const createCharacter = require('../Characters/createCharacter');
const updateCharacter = require('../Characters/updateCharacter');
const deleteCharacter = require('../Characters/deleteCharacter');
const characterDetail = require('../Characters/characterDetail');
const searchCharacterByName = require('../Characters/searchCharacterByName');

module.exports = {
   getCharacters,
   createCharacter, 
   updateCharacter,
   deleteCharacter,
   characterDetail,
   searchCharacterByName
}