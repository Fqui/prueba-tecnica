const db = require("../../Models/index");

module.exports = async (req, res) => {
  const id = req.params.id;

  try {
    const response = await db.Personaje.findOne({ where: { id } });
    if (!response) {
      res.status(404).json({ msg: "Personaje no encontrado" });
    } else {
      res.status(200).json({ response: response });
    }
  } catch (error) {
    res.json({ error: error });
  }
};
