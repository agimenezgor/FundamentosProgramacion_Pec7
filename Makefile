.PHONY: clean All

All:
	@echo "----------Building project:[ planes - Debug ]----------"
	@cd "planes" && "$(MAKE)" -f  "planes.mk"
clean:
	@echo "----------Cleaning project:[ planes - Debug ]----------"
	@cd "planes" && "$(MAKE)" -f  "planes.mk" clean
