//requirements
var express = require('express');
var router = express.Router();

//database connection Mysql
var mysql = require('mysql');
var db = mysql.createConnection({
  host: 'localhost',
  user: 'root',
  password: '',
  database: 'smartsite'
});

//routes
//getting the existing client
router.get('/clientid_login', function(req, res) {
  response = {
    clientID: req.query.clientID
  };
  console.log(response);

  const clientID = req.query.clientID;

  db.query('SELECT * FROM clientDetails WHERE clientID=?', [clientID], async function(error, results) {
    if(!results[0]) {
      res.render('../views/clientInterface', {
        message: 'Incorrect ID'
      });
    }
    else {
      const clientName = results[0].clientName;
      const clientCompany = results[0].clientCompany;
      const clientMessage = results[0].clientMessage;
      const clientContact = results[0].clientContact;
      const constToClient = results[0].constToClient;
      const workProg = results[0].workProg;
      console.log(clientName);

      res.render('../views/clientInterface', {
        message: 'clientID:'+clientID+'  clientName:'+clientName+'  clientMessage:'+clientMessage+'  clientContact:'+clientContact,
        message2:'Work Update:'+constToClient,
        message3:'Work Progress:'+workProg+'%'
      });

    }
  })
})

//send message from client to Constructor
router.get('/SendMessage', function(req, res) {
  var { clientID, SendMessage } = req.query;

  db.query("UPDATE clientDetails SET clientToConst=? WHERE clientID=?", [SendMessage, clientID], function(error, results) {
    if(error) {
      console.log(error);
    } else {
      res.render('../views/clientInterface', {
        message1: 'Message Sent'
      });
    }
  });
})

//new client registering
router.get('/clientid_register', function(req, res) {
  response = {
    clientName: req.query.clientName,
    clientCompany: req.query.clientCompany,
    clientMessage: req.query.clientMessage,
    clientContact: req.query.clientContact
  };
  console.log(response);

  var { clientName, clientCompany, clientMessage, clientContact } = req.query;
  var workProg = 0;

  db.query("INSERT INTO clientDetails SET ?"/* ; SELECT LAST_INSERT_ID()*/, {clientName:clientName, clientCompany:clientCompany, clientMessage:clientMessage, clientContact:clientContact, workProg:workProg}, function(error, results) {
  //db.query("INSERT INTO clientDetails (clientName, clientCompany, clientMessage, clientContact) VALUES (?, ?, ?, ?) SELECT LAST_INSERT_ID()", [clientName,clientCompany, clientMessage, clientContact], function(error, results) {
    if (error) {
      console.log(error);
    }
    else {
      const clientID = results[0];
      console.log('Registered ClientID into table');

      res.render('../views/client', {
      message1: 'ID created, clientID will be sent OUT-OF-BAND'//, Your client ID is:'+clientID
      });
    }
  });
})

//module exporting
module.exports = router;
