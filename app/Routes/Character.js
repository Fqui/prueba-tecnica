const charactercontroller = require('../Controllers/Characters/index');

const Character = (Router) => {
   Router.get("/characters", charactercontroller.getCharacters)
   Router.post("/characters/create", charactercontroller.createCharacter)
}

module.exports = Character;