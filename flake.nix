{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/release-24.05";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem(system:
      let
        pkgs = import nixpkgs { inherit system; };
      in
      with pkgs; {
        devShells.default = mkShell {
          packages = [
            gcc
            cmake
            boost
            cpplint
            astyle
          ] ++ (
            if ("$INSIDE_DOCKER" != "true") then [
              entr
              gh
              git-ignore
              httpie
              jq
              lazygit
              pre-commit
              ripgrep
              tmux
              tree
            ] else [
            ]
          );
          shellHook = ''
            export INSIDE_NIX=true
            export DEBUG=''${DEBUG:-true}
          '';
        };
      }
    );
}
