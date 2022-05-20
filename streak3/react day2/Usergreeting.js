import React, { Component } from 'react'

class Usergreeting extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         isLoggedIn:false
      }
    }


  render() {
    return this.state.isLoggedIn ? (
        <div>welcome Mahesh</div>
        ) : (
        <div>Welcome Guest</div>
    )


      /*let message
    if(this.state.isLoggedIn){
    message = <div>welcome Mahesh</div>
    }
    else{
        message = <div>Welcome Guest</div>
    }

    return <div>{message}</div>
     /* if(this.state.isLoggedIn){
          return <div>welcome Mahesh</div>
      }
      else{
          return <div>Welcome Guest</div>
      }
      }


    return (
      <div>
        <div>welcome Mahesh</div>
        <div>welcome guest</div>
      </div>
    )*/
  }
}

export default Usergreeting