# AGENTS.md — The OpenHeart Bible

The single source of truth for working in this repo. Read the Rules, then use the
Table of Contents to jump straight to what you need. Its purpose is to minimize
token usage: answer from this bible instead of re-exploring the code.

---

## Table of Contents

1. [Rules](#1-rules)
2. [Project Overview](#2-project-overview)
3. [File / Directory Map](#3-file--directory-map)
4. [Architecture](#4-architecture)
5. [Commands](#5-commands)
6. [Conventions](#6-conventions)

---

## 1. Rules

1. **Minimize tokens.** In every response and action, use as few tokens as
   possible. Be terse. Avoid redundant file reads and repeated work.
2. **Consult the Table of Contents first** — before reading the rest of this
   bible, and before exploring the code yourself. Read only the section(s) the
   TOC points you to, not the whole file.
3. **Keep the bible current.** When you learn something that belongs in a
   section, add it here so future sessions don't re-discover it.

---

## 2. Project Overview

OpenHeart is a cheap, efficient, contactless "heartbeat"/motion sensor. It emits
low-frequency radio waves and measures how reflected signals change over time;
small movements (heartbeat, breathing, a person shifting in a room) perturb those
reflections, letting the device detect motion without contact, cameras, or costly
parts.

**Goal:** a sensor that is cheap (inexpensive, widely available parts), efficient
(low power, always-on), and contactless (senses via radio reflection).

**Status:** early stage — repo currently holds docs only (README, this bible); no
hardware/firmware code yet.

---

## 3. File / Directory Map

_TODO: where things live, so sessions don't grep to find them._

---

## 4. Architecture

_TODO: components, data flow, key decisions._

---

## 5. Commands

_TODO: build, run, test, lint, deploy._

---

## 6. Conventions

_TODO: code style, naming, commit/PR norms._
