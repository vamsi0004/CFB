import React, { Component } from 'react'

export class ClassCounterOne extends Component {
    constructor(props) {
        super(props)
      
        this.state = {
           count:0
        }
      }
    
      componentDidMount(){
          document.title='clicked' ;{this.state.count} 'times' 
      }
      componentDidUpdate(prevprops,prevState){
          document.title='clicked'; {this.state.count} 'times'
      }
    
      render() {
        return (
          <div>
              <button onClick={()=>this.state.count+1}>click {this.state.count} times</button>

          </div>
        )
      }
}

export default ClassCounterOne