"use strict";
const { Model } = require("sequelize");
module.exports = (sequelize, DataTypes) => {
  class Pelicula_Serie extends Model {
    /**
     * Helper method for defining associations.
     * This method is not a part of Sequelize lifecycle.
     * The `models/index` file will call this method automatically.
     */
    static associate(models) {
      Pelicula_Serie.hasMany(models.Personaje, {
        as: "actor",
        foreignKey: "personajes_asociados"
      })
    }
  }
  Pelicula_Serie.init(
    {
      imagen: {
        type: DataTypes.STRING,
        allowNull: false,
      },
      titulo: {
        type: DataTypes.STRING,
        allowNull: false,
      },
      creacion: {
        type: DataTypes.STRING,
        allowNull: false,
      },
      calificacion: {
        type: DataTypes.INTEGER,
        allowNull: false,
      },
      personajes_asociados: {
        type: DataTypes.STRING,
        allowNull: false,
      },
    },
    {
      sequelize,
      timestams: false,
      tableName: "Peliculas_Series",
      modelName: "Pelicula_Serie",
    }
  );
  return Pelicula_Serie;
};
