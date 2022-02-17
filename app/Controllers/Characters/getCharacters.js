const db = require('../../Models/index');

module.exports = async (req, res) => {
   
   try {
      const response = await db.Personaje.findAll({
         attributes: ["imagen", "nombre"]
      });
      res.send(response)
   } catch (error) {
      console.error(error)
      res.json({ error: error})
   }
}