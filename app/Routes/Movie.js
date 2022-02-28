const movieController = require('../Controllers/Movies/index');

const Movie = (Router) => {
   Router.get('/movies', movieController.getMovies)
   Router.post('/movies/create', movieController.createMovie)
   Router.put('/movies/:id', movieController.updateMovie)
   Router.delete('/movies/:id', movieController.deleteMovie)
   Router.get('/movies/:id/detail', movieController.movieDetail)
}

module.exports = Movie;