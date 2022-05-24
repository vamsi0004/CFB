import React, { Component } from 'react'

class RegComp extends Component {
  render() {
    console.log('regular component render')
    return (
      <div>
          regular component {this.props.name}
      </div>
    )
  }
}

export default RegComp