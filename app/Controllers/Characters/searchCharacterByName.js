const db = require('../../Models/index');

module.exports = async (req, res) => {
   const name = req.query.name
   console.log(name)
}