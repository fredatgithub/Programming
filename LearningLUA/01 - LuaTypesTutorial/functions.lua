
function foo( ... )
	-- body
	print("Hello from inside the function")
end

foo()

--You can even print the value of a function in LUA
print(foo)

--A function can even be part of a table
a = "aeiou" -- A string
b = 13 -- A number

c = function() -- A function
	print("\n\nAin't it grand")
end -- Must be ended of course

d = {a, b, c} --Put them into a table
function printIt( tata )
	-- body
	for key, value in ipairs(tata) do print(key, type(value))
	end
end

printIt(d)