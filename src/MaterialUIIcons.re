module Menu = {
  [@bs.module "material-ui-icons/Menu"] external reactClass : ReasonReact.reactClass = "default";
  let make = (children) =>
    ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
};
