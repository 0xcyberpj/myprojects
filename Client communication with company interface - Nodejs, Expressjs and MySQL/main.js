//requirements to be used
var express = require('express');
var app = express();

//database connection Mysql
var mysql = require('mysql');
var db = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: '',
  database: 'smartsite'
});

db.connect(function(error) {
  if (error) {
    console.log('database connection error');
  }
  else {
    console.log('MYSQL connected');
  }
})


//routes
app.use('/',require('./routes/pagesRoute'));
app.use('/',require('./routes/clientRoute'));
app.use('/', require('./routes/constRoute'));

//static files serving
app.use(express.static('public'));

//engine
app.set('view engine', 'hbs');

//server startup
var server = app.listen(3122, function() {
  host = server.address().address;
  port = server.address().port;

  console.log("listening at http://%s:%s", host, port);
})
