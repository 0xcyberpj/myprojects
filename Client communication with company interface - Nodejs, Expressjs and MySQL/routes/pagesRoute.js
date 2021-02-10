var express = require('express');
var router = express.Router();

router.get('/', function(req, res){
  res.render("../views/home");
});

router.get('/client', function(req, res){
  res.render("../views/client");
});

router.get('/clientInterface', function(req, res){
  res.render("../views/clientInterface");
});

router.get('/constInterface', function(req, res){
  res.render("../views/constInterface");
});

module.exports = router;
