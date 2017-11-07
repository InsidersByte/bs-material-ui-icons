module Delete = {
  [@bs.module "material-ui-icons/Delete"] external reactClass : ReasonReact.reactClass = "default";
  let make = (children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
};

module Menu = {
  [@bs.module "material-ui-icons/Menu"] external reactClass : ReasonReact.reactClass = "default";
  let make = (children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
};
