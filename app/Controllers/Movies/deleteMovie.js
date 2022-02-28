const db = require("../../Models/index");

module.exports = async (req, res) => {
  const id = req.params.id;

  try {
    const response = await db.Pelicula_Serie.findOne({ where: { id } });
    if (!response) {
      res.status(404).json({ msg: "Personaje no encontrado" });
    } else {
      await response.destroy();
      res.json({ msg: "Eliminado" });
    }
  } catch (error) {
    res.json({ error: error });
  }
};
