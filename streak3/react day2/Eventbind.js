import React, { Component } from 'react'

class Eventbind extends Component {

    constructor(props){
        super(props)

        this.state={
            message:'Hello'
        }


      //  this.clickhandler=this.clickhandler.bind(this )

    }

    /*clickhandler(){
       this.setState({
            message:'GoodBye!'
        })
        console.log(this)
    }*/


    clickhandler=()=>{
        this.setstate({
            message:'Good Bye!!'
        })
    }

  render() {
    return (
      <div>
          <div>{this.state.message}</div>
         {/*} <button onClick={this.clickhandler.bind(this)}>click</button>
          <button onClick={()=>this.clickhandler()}>click</button>*/}
          <button onClick={this.clickhandler}>press</button>
      </div>
    )
  }
}

export default Eventbind