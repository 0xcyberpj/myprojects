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
//get info of client and message
router.get('/getinfo', function(req, res) {
  var clientID = req.query.clientID;

  db.query("SELECT * FROM clientDetails WHERE clientID =?", [clientID], async function(error, results) {
    if(error) {
      console.log(error);
    } else {
      //console.log(results[0]);
      const clientName = results[0].clientName;
      const clientCompany = results[0].clientCompany;
      const clientMessage = results[0].clientMessage;
      const clientContact = results[0].clientContact;
      const clientToConst = results[0].clientToConst;

    /*; SELECT * FROM clientToConst WHERE clientID = ?
    const SentMessage = results[1].SendMessage;
    console.log(results[1]);*/

      res.render('../views/constInterface', {
      message2:'clientID:'+clientID+'  clientName:'+clientName+'  clientMessage:'+clientMessage+'  clientContact:'+clientContact,/*+'Message Sent:'+SentMessage*/
      message3:'Message from client:'+clientToConst
      });
    }
  });
})

//send message from Constructor to client
router.get('/SendClientMessage', function(req, res) {
  var { clientID, SendMessage, Prog } = req.query;

  db.query("UPDATE clientDetails SET constToClient=?, workProg=? WHERE clientID=?", [ SendMessage, Prog, clientID], function(error, results) {
    if(error) {
      console.log(error);
    } else {
      res.render('../views/clientInterface', {
        message1: 'Message Sent to Client'
      });
    }
  });
})

//module exporting
module.exports = router;
