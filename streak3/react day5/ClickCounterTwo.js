import React, { Component } from 'react'

class ClickCounterTwo extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         count:0
      }
    }
    incrementCount =() =>{
        this.setState(prevState => {
            return {const:prevState.count+1}
        })

    }
  render() {
      const {count} = this.state
    return (
      <button onClick={this.incrementCount}>clicked {count} times</button>
    )
  }
}

export default ClickCounterTwo