#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219C38
// Address: 0x219c38 - 0x219d30
void sub_00219C38_0x219c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219C38_0x219c38");
#endif

    switch (ctx->pc) {
        case 0x219c60u: goto label_219c60;
        case 0x219cf0u: goto label_219cf0;
        case 0x219d08u: goto label_219d08;
        default: break;
    }

    ctx->pc = 0x219c38u;

    // 0x219c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219c3c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x219c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x219c40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x219c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x219c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x219c48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x219c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x219c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c54: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x219c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x219c58: 0xc08674c  jal         func_219D30
    ctx->pc = 0x219C58u;
    SET_GPR_U32(ctx, 31, 0x219C60u);
    ctx->pc = 0x219C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219C58u;
    // 0x219c5c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219D30u, 0x219C58u, 0x219C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C60u;
label_219c60:
    // 0x219c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c64: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x219C64u;
    {
        const bool branch_taken_0x219c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c64) {
            ctx->pc = 0x219C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219C64u;
            // 0x219c68: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219D1Cu;
            goto label_219d1c;
        }
    }
    ctx->pc = 0x219C6Cu;
    // 0x219c6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x219c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219c70: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x219C70u;
    {
        const bool branch_taken_0x219c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C70u;
        // 0x219c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c70) {
            ctx->pc = 0x219D18u;
            goto label_219d18;
        }
    }
    ctx->pc = 0x219C78u;
    // 0x219c78: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x219c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x219c7c: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x219c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x219c80: 0x6883001b  ldl         $v1, 0x1B($a0)
    ctx->pc = 0x219c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x219c84: 0x6c830014  ldr         $v1, 0x14($a0)
    ctx->pc = 0x219c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x219c88: 0x68850023  ldl         $a1, 0x23($a0)
    ctx->pc = 0x219c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x219c8c: 0x6c85001c  ldr         $a1, 0x1C($a0)
    ctx->pc = 0x219c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x219c90: 0x6886002b  ldl         $a2, 0x2B($a0)
    ctx->pc = 0x219c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x219c94: 0x6c860024  ldr         $a2, 0x24($a0)
    ctx->pc = 0x219c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x219c98: 0xb2220d73  sdl         $v0, 0xD73($s1)
    ctx->pc = 0x219c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219c9c: 0xb6220d6c  sdr         $v0, 0xD6C($s1)
    ctx->pc = 0x219c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ca0: 0xb2230d7b  sdl         $v1, 0xD7B($s1)
    ctx->pc = 0x219ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ca4: 0xb6230d74  sdr         $v1, 0xD74($s1)
    ctx->pc = 0x219ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ca8: 0xb2250d83  sdl         $a1, 0xD83($s1)
    ctx->pc = 0x219ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cac: 0xb6250d7c  sdr         $a1, 0xD7C($s1)
    ctx->pc = 0x219cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3452); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cb0: 0xb2260d8b  sdl         $a2, 0xD8B($s1)
    ctx->pc = 0x219cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3467); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cb4: 0xb6260d84  sdr         $a2, 0xD84($s1)
    ctx->pc = 0x219cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cb8: 0x68820033  ldl         $v0, 0x33($a0)
    ctx->pc = 0x219cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x219cbc: 0x6c82002c  ldr         $v0, 0x2C($a0)
    ctx->pc = 0x219cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x219cc0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x219cc4: 0xb2220d93  sdl         $v0, 0xD93($s1)
    ctx->pc = 0x219cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3475); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219cc8: 0xb6220d8c  sdr         $v0, 0xD8C($s1)
    ctx->pc = 0x219cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3468); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x219ccc: 0xae230d94  sw          $v1, 0xD94($s1)
    ctx->pc = 0x219cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3476), GPR_U32(ctx, 3));
    // 0x219cd0: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x219cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x219cd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219cd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x219cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cdc: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x219cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x219ce0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219ce4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x219ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x219ce8: 0xc07fc48  jal         func_1FF120
    ctx->pc = 0x219CE8u;
    SET_GPR_U32(ctx, 31, 0x219CF0u);
    ctx->pc = 0x219CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CE8u;
    // 0x219cec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF120u, 0x219CE8u, 0x219CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219CF8u;
    {
        const bool branch_taken_0x219cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CF8u;
        // 0x219cfc: 0x34a50f1b  ori         $a1, $a1, 0xF1B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cf8) {
            ctx->pc = 0x219D10u;
            goto label_219d10;
        }
    }
    ctx->pc = 0x219D00u;
    // 0x219d00: 0xc0848e0  jal         func_212380
    ctx->pc = 0x219D00u;
    SET_GPR_U32(ctx, 31, 0x219D08u);
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x219D00u, 0x219D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D08u;
label_219d08:
    // 0x219d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x219D08u;
    {
        const bool branch_taken_0x219d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D08u;
        // 0x219d0c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d08) {
            ctx->pc = 0x219D1Cu;
            goto label_219d1c;
        }
    }
    ctx->pc = 0x219D10u;
label_219d10:
    // 0x219d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219d14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x219d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_219d18:
    // 0x219d18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x219d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219d1c:
    // 0x219d1c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x219d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219d20: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x219d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219d24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x219d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x219d28: 0x3e00008  jr          $ra
    ctx->pc = 0x219D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D28u;
        // 0x219d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D30u;
}
