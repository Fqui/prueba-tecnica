const db = require("../../models/index");
const jwt = require("jsonwebtoken");
const bcrypt = require("bcrypt");
const secrets = "mi_secreto";

module.exports = async (req, res) => {
  const { email, contraseña } = req.body;

  try {
    const user = await db.Usuario.findOne({
      where: { email },
    });
    if (!user) {
      res.status(404).json({ msg: "Usuario con este correo no encontrado" });
    } else {
      if (bcrypt.compareSync(contraseña, user.contraseña)) {
        // Creamos el token
        let token = jwt.sign(
          { usuario: user.usuario, email: user.email },
          secrets,
          {
            expiresIn: "24hr",
          }
        );

        res.status(200).json({
          email: user.email,
          token: token,
        });
      } else {
        // Acceso no autorizado
        res.status(401).json({ msg: "Contraseña incorrecta" });
      }
    }
  } catch (error) {
    res.status(500).json({ msg: "Error", error: error });
  }
};
