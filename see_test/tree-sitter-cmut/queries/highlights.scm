(call_expression
 name: (identifier) @function)



[
"=>"
] @operator

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

(comment) @comment

(string) @string

(group
 name: (group_name) @heading.1)

(subgroup_name) @heading.2
[
  (number)
] @number
