## Quest Events
Expanded Quest Event Table

| Event | Description  |
| :------|:--------------|
| [mine](#mine-event) | When mining.
| [fish](#fish-event) | When fishing.
| [buy](#buy-event) | When buying something from a certain NPC.
| [sell](#sell-event) | When selling something from a certain NPC.
| [craft](#craft-event) | When crafting something from a certain NPC.

# Mine Event
```lua
when mine begin -- When mining begins.
end
```

# Fish Event
```lua
when fish begin -- When fishing begins.
end
```

# Buy Event
```lua
when 9003.buy begin -- When buying begins on 9003.
	-- Returns selected item.
end
```

# Sell Event
```lua
when 9003.sell begin - When selling begins on 9003.
	-- Returns selected item.
end
```

# Craft Event
```lua
when 20018.craft begin -- When crafting begins on 20018.
	-- Returns selected item.
end
```
