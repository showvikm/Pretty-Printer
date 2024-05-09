define program
	[c_function]
end define

define c_function
	[function_head] [NL]
	{ [NL][IN]
	  [function_body]
	}
end define

define function_head
	[return_type] [function_name]()
end define

define function_name
	[id]
end define

define function_body
	[repeat variable_declaration] [return_statement]
	| [print_statement] [return_statement]
end define

define return_type
	int
end define

define variable_declaration
	[id] [id]; [NL]
	| [id] [id], [id], [id]; [NL]
	| [id] [id] [id] = [number]; [NL]
    	| [id] [id] [id]; [NL]
    	| [id] = [number]; [NL]
    	| [id] = [charlit]; [NL]
    	| [id] [id], [id]; [NL]
    	| [id] = [id] + [number]; [NL]
    	| [id] = [id] - [number]; [NL]
    	| [id] = [id] * [number]; [NL]
    	| [id]([stringlit], &[id]); [NL]
    	| [id]([stringlit], [id]); [NL]
    	| [id]([stringlit]); [NL]
    	| if([id] > [number]) [NL][IN] [id] = [charlit]; [EX] [NL]
    	| else [NL][IN] [id] = [charlit]; [EX] [NL]
    	| [if_statement]
    	| [else_statement]
    	| [switch_statement]
	| [for_loop]
end define

define if_statement
    if([id] > [number]) [NL]{ [NL] [IN] [id] = [charlit]; [NL] [id]([stringlit]); [EX] [NL]} [NL]
    | if([id] [comparisons] [number] [logical_operators] [id] [comparisons] [number]) [IN] [NL] [id]([stringlit]); [EX] [NL]
    | if([logical_operators] ([id] [comparisons] [number]) [logical_operators] [logical_operators]([id] [comparisons] [number])) [IN] [NL] [id]([stringlit]); [EX] [NL]
end define

define else_statement
    else [NL]{ [NL] [IN] [id] = [charlit]; [NL] [id]([stringlit]); [EX]} [NL]
end define

define switch_statement
    [id]([id]) [NL]{ [NL] [IN] [repeat case_statement] [NL] [EX]} [NL]
end define

define case_statement
    [id] [charlit]: [NL] [IN] [print_statement] [id]; [EX] [NL]
    | [id]: [NL] [IN] [print_statement] [EX]
end define

define for_loop
    [id] ([id] = [number]; [id] [comparisons] [number]; [id][incremental]) [NL] [IN] [print_statement] [EX]
end define

compounds
   ++
   -- 
   >= 
   <= 
   ==
   &&
   '||'

end compounds

define logical_operators
    '&& 
    | '|'|
    |'!
end define

define comparisons
    '> 
  | '< 
  | '>= 
  | '<= 
  | '==
end define

define incremental
    ++ 
   | --
end define

define print_statement
	printf([stringlit]); [NL]
end define

define return_statement
	return [return_value]; [NL][EX]
end define

define return_value
	[number]
end define


% Rules:
function main
    match [program]
	P[program]
end function