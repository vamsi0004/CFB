import React, { PureComponent } from 'react'

class PureComp extends PureComponent {
  render() {
      console.log('pure component')
    return (
      <div>
          pure components {this.props.name}
      </div>
    )
  }
}

export default PureComp