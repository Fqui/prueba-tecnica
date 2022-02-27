const charactercontroller = require('../Controllers/Characters/index');

const Character = (Router) => {
   Router.get("/characters", charactercontroller.getCharacters)
   Router.post("/characters/create", charactercontroller.createCharacter)
   Router.put("/characters/:id", charactercontroller.updateCharacter)
   Router.delete("/characters/:id", charactercontroller.deleteCharacter)
   Router.get("/characters/:id/detail", charactercontroller.characterDetail)
   //busquedas por nombre, peso, idPelicula
   //Router.get("/characters", charactercontroller.searchCharacterByName)

}

module.exports = Character;