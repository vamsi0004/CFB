import React, { Component } from 'react'

class RefsDemo extends Component {

    constructor(props) {
      super(props)
      this.inputRef=React.createRef()
      this.cbRef=null
      this.setCbRef=element =>{
          this.cbRef=element
      }  
    }
    componentDidMount(){
        if(this.cbRef){
            this.cbRef.focus()
        }
        //console.log(this.inputRef)
    }
    clickHandler=() => {
        alert(this.inputRef.current.value)
    }

  render() {
    return (
      <div>
          <input className="text" ref={this.inputRef} />
        <button onClick={this.clickHandler} > CLick</button>
      </div>
    )
  }
}

export default RefsDemo