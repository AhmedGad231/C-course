.PHONY: clean All

All:
	@echo "----------Building project:[ Implementaion_2 - Debug ]----------"
	@cd "Implementaion_2" && "$(MAKE)" -f  "Implementaion_2.mk"
clean:
	@echo "----------Cleaning project:[ Implementaion_2 - Debug ]----------"
	@cd "Implementaion_2" && "$(MAKE)" -f  "Implementaion_2.mk" clean
