import React, { Component } from 'react'

class LifecycleB extends Component {

    constructor(props) {
      super(props)
    
      this.state = {
         name :'Vamsi'
        
      }
      console.log('LifecycleB constructor') 
    }
    static getDerivedStateFromProps(props, state) {
        console.log('LifecycleB getDerivedStateFromProps')
        return null
    }
    componentDidMount() {
        console.log('LifecycleB componentsDidMount')
    }
    componentDidMount() {
        console.log('LifecycleB componentsDidMount')
    }
    shouldComponentUpdate(){
      console.log('LifecycleB render')
      return true
    }
    getSnapshotBeforeUpdate(prevProps, prevstate){
      console.log('LifecycleB componentDidUpdate')
    }

    componentDidUpdate(){
      console.log('LifecycleB componentDidupdate')
    }

  render() {
      console.log('Lifecycleb render')
    return (
      <div>
          LifecycleB
      </div>
    )
  }
}

export default LifecycleB
