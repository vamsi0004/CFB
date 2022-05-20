import React, { Component } from 'react'
import ChlidComponent from './ChlidComponent'

class ParentComponent extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         parentName:'parent'
      }
      this.greetparent= this.greetparent.bind(this)
    }

    
    
    greetparent(chlidName){
        alert('Hello '+this.state.parentName + this.state.chlidName)
    }


  render() {
    return (
      <div>
          <ChlidComponent greethandler={this.greetparent}/>
      </div>
    )
  }
}

export default ParentComponent