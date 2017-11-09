# Reason bindings for Material-UI-Icons

[![npm](https://img.shields.io/npm/v/bs-material-ui-icons.svg)](https://www.npmjs.com/package/bs-material-ui-icons)  

[Reason](https://reasonml.github.io/) bindings for [material-ui-icons](https://github.com/callemall/material-ui).

## Status

🚧 This is a WIP, not everything is supported yet. 🚧

Feel free to create an issue or PR if you find anything missing.

## Installation

```
yarn add bs-material-ui-icons
yarn add material-ui@1.0.0-beta.17
```

Then add `bs-material-ui-icons` to `bs-dev-dependencies` in your `bsconfig.json`:

```json
{
  ...
  "bs-dev-dependencies": ["bs-material-ui-icons"]
}
```

## Usage

```reason
let component = ReasonReact.statelessComponent("Example");

let make = (_children) => {
  ...component,
  render: (_self) => <MaterialUIIcons.Delete>
};
```
