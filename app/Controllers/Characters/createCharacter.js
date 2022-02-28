const db = require("../../Models/index");

module.exports = async (req, res) => {
  const { imagen, nombre, edad, peso, historia, peliculas_series } = req.body;

  try {
    const response = await db.Personaje.create({
      imagen,
      nombre,
      edad,
      peso,
      historia,
      peliculas_series,
    });
    res.status(200).json({ response: response });
  } catch (error) {
    res.json({ error: error.message });
  }
};
