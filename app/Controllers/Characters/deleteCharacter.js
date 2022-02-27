const db = require("../../Models/index");

module.exports = async (req, res) => {
  const id = req.params.id;

  try {
    const response = await db.Personaje.findOne({ where: { id } });
    await response.destroy();
    res.json({message: "success"});
  } catch (error) {
   res.json({error: error})
  }
};
