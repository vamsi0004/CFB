import React, { Component } from 'react'
import LifecycleB from './LifecycleB'

class LifecycleA extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         name :'mahesh'
        
      }
      console.log('LifecycleA constructor') 
    }
    static getDerivedStateFromProps(props, state) {
        console.log('LifecycleA getDerivedStateFromProps')
        return null
    }
    componentDidMount() {
        console.log('LifecycleA componentsDidMount')
    }
    shouldComponentUpdate(){
      console.log('LifecycleA render')
      return true
    }
    getSnapshotBeforeUpdate(prevProps,prevstate){
      console.log('LifecycleA componentDidUpdate')
      return null
    }

    componentDidUpdate(){
      console.log('LifecycleA componentDidupdate')
    }

    changeState(){
      this.setState({
        name:'mahesh Reddy'
      })
    }

  render() {
      console.log('LifecycleA render')
    return (
      <div>
          <div>LifecycleA</div>
          <button onClick={this.changeState} >change state</button>
          <LifecycleB />
      </div>
    )
  }
}

export default LifecycleA