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

// Function: sub_00251EF8
// Address: 0x251ef8 - 0x251fc0
void sub_00251EF8_0x251ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251EF8_0x251ef8");
#endif

    switch (ctx->pc) {
        case 0x251ef8u: goto label_251ef8;
        case 0x251efcu: goto label_251efc;
        case 0x251f00u: goto label_251f00;
        case 0x251f04u: goto label_251f04;
        case 0x251f08u: goto label_251f08;
        case 0x251f0cu: goto label_251f0c;
        case 0x251f10u: goto label_251f10;
        case 0x251f14u: goto label_251f14;
        case 0x251f18u: goto label_251f18;
        case 0x251f1cu: goto label_251f1c;
        case 0x251f20u: goto label_251f20;
        case 0x251f24u: goto label_251f24;
        case 0x251f28u: goto label_251f28;
        case 0x251f2cu: goto label_251f2c;
        case 0x251f30u: goto label_251f30;
        case 0x251f34u: goto label_251f34;
        case 0x251f38u: goto label_251f38;
        case 0x251f3cu: goto label_251f3c;
        case 0x251f40u: goto label_251f40;
        case 0x251f44u: goto label_251f44;
        case 0x251f48u: goto label_251f48;
        case 0x251f4cu: goto label_251f4c;
        case 0x251f50u: goto label_251f50;
        case 0x251f54u: goto label_251f54;
        case 0x251f58u: goto label_251f58;
        case 0x251f5cu: goto label_251f5c;
        case 0x251f60u: goto label_251f60;
        case 0x251f64u: goto label_251f64;
        case 0x251f68u: goto label_251f68;
        case 0x251f6cu: goto label_251f6c;
        case 0x251f70u: goto label_251f70;
        case 0x251f74u: goto label_251f74;
        case 0x251f78u: goto label_251f78;
        case 0x251f7cu: goto label_251f7c;
        case 0x251f80u: goto label_251f80;
        case 0x251f84u: goto label_251f84;
        case 0x251f88u: goto label_251f88;
        case 0x251f8cu: goto label_251f8c;
        case 0x251f90u: goto label_251f90;
        case 0x251f94u: goto label_251f94;
        case 0x251f98u: goto label_251f98;
        case 0x251f9cu: goto label_251f9c;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fa4u: goto label_251fa4;
        case 0x251fa8u: goto label_251fa8;
        case 0x251facu: goto label_251fac;
        case 0x251fb0u: goto label_251fb0;
        case 0x251fb4u: goto label_251fb4;
        case 0x251fb8u: goto label_251fb8;
        case 0x251fbcu: goto label_251fbc;
        default: break;
    }

    ctx->pc = 0x251ef8u;

label_251ef8:
    // 0x251ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_251efc:
    // 0x251efc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_251f00:
    if (ctx->pc == 0x251F00u) {
        ctx->pc = 0x251F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EFCu;
        // 0x251f00: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F04u;
        goto label_251f04;
    }
    ctx->pc = 0x251EFCu;
    {
        const bool branch_taken_0x251efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EFCu;
        // 0x251f00: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251efc) {
            ctx->pc = 0x251F18u;
            goto label_251f18;
        }
    }
    ctx->pc = 0x251F04u;
label_251f04:
    // 0x251f04: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251f08:
    // 0x251f08: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251f0c:
    // 0x251f0c: 0x2484edb0  addiu       $a0, $a0, -0x1250
    ctx->pc = 0x251f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962608));
label_251f10:
    // 0x251f10: 0x10000008  b           . + 4 + (0x8 << 2)
label_251f14:
    if (ctx->pc == 0x251F14u) {
        ctx->pc = 0x251F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F10u;
        // 0x251f14: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F18u;
        goto label_251f18;
    }
    ctx->pc = 0x251F10u;
    {
        const bool branch_taken_0x251f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F10u;
        // 0x251f14: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f10) {
            ctx->pc = 0x251F34u;
            goto label_251f34;
        }
    }
    ctx->pc = 0x251F18u;
label_251f18:
    // 0x251f18: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251f18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_251f1c:
    // 0x251f1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_251f20:
    if (ctx->pc == 0x251F20u) {
        ctx->pc = 0x251F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F1Cu;
        // 0x251f20: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F24u;
        goto label_251f24;
    }
    ctx->pc = 0x251F1Cu;
    {
        const bool branch_taken_0x251f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251f1c) {
            ctx->pc = 0x251F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F1Cu;
            // 0x251f20: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F48u;
            goto label_251f48;
        }
    }
    ctx->pc = 0x251F24u;
label_251f24:
    // 0x251f24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251f28:
    // 0x251f28: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251f2c:
    // 0x251f2c: 0x2484edc0  addiu       $a0, $a0, -0x1240
    ctx->pc = 0x251f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962624));
label_251f30:
    // 0x251f30: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_251f34:
    // 0x251f34: 0xc0944dc  jal         func_251370
label_251f38:
    if (ctx->pc == 0x251F38u) {
        ctx->pc = 0x251F3Cu;
        goto label_251f3c;
    }
    ctx->pc = 0x251F34u;
    SET_GPR_U32(ctx, 31, 0x251F3Cu);
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x251F34u, 0x251F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F3Cu;
label_251f3c:
    // 0x251f3c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_251f40:
    if (ctx->pc == 0x251F40u) {
        ctx->pc = 0x251F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F3Cu;
        // 0x251f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F44u;
        goto label_251f44;
    }
    ctx->pc = 0x251F3Cu;
    {
        const bool branch_taken_0x251f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F3Cu;
        // 0x251f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f3c) {
            ctx->pc = 0x251FB4u;
            goto label_251fb4;
        }
    }
    ctx->pc = 0x251F44u;
label_251f44:
    // 0x251f44: 0x0  nop
    ctx->pc = 0x251f44u;
    // NOP
label_251f48:
    // 0x251f48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_251f4c:
    if (ctx->pc == 0x251F4Cu) {
        ctx->pc = 0x251F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F48u;
        // 0x251f4c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F50u;
        goto label_251f50;
    }
    ctx->pc = 0x251F48u;
    {
        const bool branch_taken_0x251f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F48u;
        // 0x251f4c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f48) {
            ctx->pc = 0x251F70u;
            goto label_251f70;
        }
    }
    ctx->pc = 0x251F50u;
label_251f50:
    // 0x251f50: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x251f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_251f54:
    // 0x251f54: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_251f58:
    if (ctx->pc == 0x251F58u) {
        ctx->pc = 0x251F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F54u;
        // 0x251f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F5Cu;
        goto label_251f5c;
    }
    ctx->pc = 0x251F54u;
    {
        const bool branch_taken_0x251f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f54) {
            ctx->pc = 0x251F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F54u;
            // 0x251f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251FB4u;
            goto label_251fb4;
        }
    }
    ctx->pc = 0x251F5Cu;
label_251f5c:
    // 0x251f5c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x251f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_251f60:
    // 0x251f60: 0x40f809  jalr        $v0
label_251f64:
    if (ctx->pc == 0x251F64u) {
        ctx->pc = 0x251F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F60u;
        // 0x251f64: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F68u;
        goto label_251f68;
    }
    ctx->pc = 0x251F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251F68u);
        ctx->pc = 0x251F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F60u;
        // 0x251f64: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251F60u, 0x251F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251F68u;
label_251f68:
    // 0x251f68: 0x10000012  b           . + 4 + (0x12 << 2)
label_251f6c:
    if (ctx->pc == 0x251F6Cu) {
        ctx->pc = 0x251F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F68u;
        // 0x251f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F70u;
        goto label_251f70;
    }
    ctx->pc = 0x251F68u;
    {
        const bool branch_taken_0x251f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F68u;
        // 0x251f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f68) {
            ctx->pc = 0x251FB4u;
            goto label_251fb4;
        }
    }
    ctx->pc = 0x251F70u;
label_251f70:
    // 0x251f70: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x251f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_251f74:
    // 0x251f74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x251f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_251f78:
    // 0x251f78: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x251f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_251f7c:
    // 0x251f7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_251f80:
    if (ctx->pc == 0x251F80u) {
        ctx->pc = 0x251F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F7Cu;
        // 0x251f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251F84u;
        goto label_251f84;
    }
    ctx->pc = 0x251F7Cu;
    {
        const bool branch_taken_0x251f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F7Cu;
        // 0x251f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f7c) {
            ctx->pc = 0x251FB4u;
            goto label_251fb4;
        }
    }
    ctx->pc = 0x251F84u;
label_251f84:
    // 0x251f84: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x251f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_251f88:
    // 0x251f88: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x251f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_251f8c:
    // 0x251f8c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x251f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251f90:
    // 0x251f90: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x251f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251f94:
    // 0x251f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x251f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251f98:
    // 0x251f98: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x251f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_251f9c:
    // 0x251f9c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x251f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_251fa0:
    // 0x251fa0: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x251fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_251fa4:
    // 0x251fa4: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_251fa8:
    if (ctx->pc == 0x251FA8u) {
        ctx->pc = 0x251FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FA4u;
        // 0x251fa8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FACu;
        goto label_251fac;
    }
    ctx->pc = 0x251FA4u;
    {
        const bool branch_taken_0x251fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x251fa4) {
            ctx->pc = 0x251FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251FA4u;
            // 0x251fa8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251FB0u;
            goto label_251fb0;
        }
    }
    ctx->pc = 0x251FACu;
label_251fac:
    // 0x251fac: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x251facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_251fb0:
    // 0x251fb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x251fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_251fb4:
    // 0x251fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_251fb8:
    // 0x251fb8: 0x3e00008  jr          $ra
label_251fbc:
    if (ctx->pc == 0x251FBCu) {
        ctx->pc = 0x251FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB8u;
        // 0x251fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251FC0u;
        goto label_fallthrough_0x251fb8;
    }
    ctx->pc = 0x251FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251FB8u;
        // 0x251fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251fb8:
    ctx->pc = 0x251FC0u;
}
