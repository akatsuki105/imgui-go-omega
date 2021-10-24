package imgui_test

import (
	"testing"

	"github.com/pokemium/imgui-go-omega"
	"github.com/stretchr/testify/assert"
)

func TestVersion(t *testing.T) {
	version := imgui.Version()
	assert.Equal(t, "1.85", version)
}
