const db = require('../../Models/index');
const bcrypt = require("bcrypt");


module.exports = async (req,res) => {
   const {usuario, email, contraseña} = req.body;
   const hash = bcrypt.hashSync(contraseña, 10);

   try {
      const user = await db.Usuario.create({
         usuario,
         email,
         contraseña: hash
      })
      res.status(201).json({msg:"usuario creado satisfactoriamente", usuario: user.usuario});
   } catch (error) {
      console.log(error);
      res.status(500).json({msg:"Ups", error});
   }
}