"use strict";
const { Model } = require("sequelize");
module.exports = (sequelize, DataTypes) => {
  class Personaje extends Model {
    /**
     * Helper method for defining associations.
     * This method is not a part of Sequelize lifecycle.
     * The `models/index` file will call this method automatically.
     */
    static associate(models) {
      Personaje.hasMany(models.Pelicula_Serie,{
        as: "movies",
        foreignKey: "peliculas_series"
      })
    }
  }
  Personaje.init(
    {
      imagen: {
        type: DataTypes.STRING,
        allowNull: false,
      },
      nombre: {
        type: DataTypes.STRING,
        allowNull: false,
      },
      edad: {
        type: DataTypes.INTEGER,
        allowNull: false,
      },
      peso: {
        type: DataTypes.INTEGER,
        allowNull: false,
      },
      historia: {
        type: DataTypes.TEXT,
        allowNull: false,
      },
      peliculas_series: {
        type: DataTypes.STRING,
        allowNull: false,
      },
    },
    {
      sequelize,
      timestams: false,
      tableName: "Personajes",
      modelName: "Personaje",
    }
  );
  return Personaje;
};
