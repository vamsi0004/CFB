import React, { Component } from 'react'


 class Counter extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         count:0
      }
    }

    increment(){
        {/*this.setState({
            count:this.state.count+1
        },
        () => {
            console.log('Callback value',this.state.count)
        }
    )*/}
    this.setState(prevstate =>({
        count:prevstate.count+1
    }))
        console.log(this.state.count)
    }
    clear(){
        this.setState({
            count:0
        })
    }
    incrementfive(){
        this.increment()
        this.increment()
        this.increment()
        this.increment()
        this.increment()
    }


  render() {
    return (
    <div>
        <div>count -> {this.state.count}</div>
        <button onClick={() =>this.incrementfive()}>Increament</button>
        <button onClick={()=>this.clear()}>clear</button>
    </div>
    )
  }
}



export default Counter