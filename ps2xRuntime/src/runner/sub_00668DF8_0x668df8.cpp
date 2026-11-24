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

// Function: sub_00668DF8
// Address: 0x668df8 - 0x668ee0
void sub_00668DF8_0x668df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00668DF8_0x668df8");
#endif

    switch (ctx->pc) {
        case 0x668df8u: goto label_668df8;
        case 0x668dfcu: goto label_668dfc;
        case 0x668e00u: goto label_668e00;
        case 0x668e04u: goto label_668e04;
        case 0x668e08u: goto label_668e08;
        case 0x668e0cu: goto label_668e0c;
        case 0x668e10u: goto label_668e10;
        case 0x668e14u: goto label_668e14;
        case 0x668e18u: goto label_668e18;
        case 0x668e1cu: goto label_668e1c;
        case 0x668e20u: goto label_668e20;
        case 0x668e24u: goto label_668e24;
        case 0x668e28u: goto label_668e28;
        case 0x668e2cu: goto label_668e2c;
        case 0x668e30u: goto label_668e30;
        case 0x668e34u: goto label_668e34;
        case 0x668e38u: goto label_668e38;
        case 0x668e3cu: goto label_668e3c;
        case 0x668e40u: goto label_668e40;
        case 0x668e44u: goto label_668e44;
        case 0x668e48u: goto label_668e48;
        case 0x668e4cu: goto label_668e4c;
        case 0x668e50u: goto label_668e50;
        case 0x668e54u: goto label_668e54;
        case 0x668e58u: goto label_668e58;
        case 0x668e5cu: goto label_668e5c;
        case 0x668e60u: goto label_668e60;
        case 0x668e64u: goto label_668e64;
        case 0x668e68u: goto label_668e68;
        case 0x668e6cu: goto label_668e6c;
        case 0x668e70u: goto label_668e70;
        case 0x668e74u: goto label_668e74;
        case 0x668e78u: goto label_668e78;
        case 0x668e7cu: goto label_668e7c;
        case 0x668e80u: goto label_668e80;
        case 0x668e84u: goto label_668e84;
        case 0x668e88u: goto label_668e88;
        case 0x668e8cu: goto label_668e8c;
        case 0x668e90u: goto label_668e90;
        case 0x668e94u: goto label_668e94;
        case 0x668e98u: goto label_668e98;
        case 0x668e9cu: goto label_668e9c;
        case 0x668ea0u: goto label_668ea0;
        case 0x668ea4u: goto label_668ea4;
        case 0x668ea8u: goto label_668ea8;
        case 0x668eacu: goto label_668eac;
        case 0x668eb0u: goto label_668eb0;
        case 0x668eb4u: goto label_668eb4;
        case 0x668eb8u: goto label_668eb8;
        case 0x668ebcu: goto label_668ebc;
        case 0x668ec0u: goto label_668ec0;
        case 0x668ec4u: goto label_668ec4;
        case 0x668ec8u: goto label_668ec8;
        case 0x668eccu: goto label_668ecc;
        case 0x668ed0u: goto label_668ed0;
        case 0x668ed4u: goto label_668ed4;
        case 0x668ed8u: goto label_668ed8;
        case 0x668edcu: goto label_668edc;
        default: break;
    }

    ctx->pc = 0x668df8u;

label_668df8:
    // 0x668df8: 0x202c7025  addi        $t4, $at, 0x7025
    ctx->pc = 0x668df8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)28709, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_668dfc:
    // 0x668dfc: 0x2c646c25  sltiu       $a0, $v1, 0x6C25
    ctx->pc = 0x668dfcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27685) ? 1 : 0);
label_668e00:
    // 0x668e00: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e00u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e04:
    // 0x668e04: 0x3025202c  andi        $a1, $at, 0x202C
    ctx->pc = 0x668e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)8236);
label_668e08:
    // 0x668e08: 0x25586c38  addiu       $t8, $t2, 0x6C38
    ctx->pc = 0x668e08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 27704));
label_668e0c:
    // 0x668e0c: 0x586c3830  .word       0x586C3830                   # blezl       $v1, . + 4 + (0x3830 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_668e10:
    if (ctx->pc == 0x668E10u) {
        ctx->pc = 0x668E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668E0Cu;
        // 0x668e10: 0x6c25202c  ldr         $a1, 0x202C($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x668E14u;
        goto label_668e14;
    }
    ctx->pc = 0x668E0Cu;
    {
        const bool branch_taken_0x668e0c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x668e0c) {
            ctx->pc = 0x668E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x668E0Cu;
            // 0x668e10: 0x6c25202c  ldr         $a1, 0x202C($at) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x676ED0u;
            return;
        }
    }
    ctx->pc = 0x668E14u;
label_668e14:
    // 0x668e14: 0x25202c64  addiu       $zero, $t1, 0x2C64
    ctx->pc = 0x668e14u;
    // NOP (addiu $zero, ...)
label_668e18:
    // 0x668e18: 0x202c646c  addi        $t4, $at, 0x646C
    ctx->pc = 0x668e18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_668e1c:
    // 0x668e1c: 0x2c646c25  sltiu       $a0, $v1, 0x6C25
    ctx->pc = 0x668e1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27685) ? 1 : 0);
label_668e20:
    // 0x668e20: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e20u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e24:
    // 0x668e24: 0x2020202c  addi        $zero, $at, 0x202C
    ctx->pc = 0x668e24u;
    // NOP (addi to $zero)
label_668e28:
    // 0x668e28: 0x2c646c25  sltiu       $a0, $v1, 0x6C25
    ctx->pc = 0x668e28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27685) ? 1 : 0);
label_668e2c:
    // 0x668e2c: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e2cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e30:
    // 0x668e30: 0x2020202c  addi        $zero, $at, 0x202C
    ctx->pc = 0x668e30u;
    // NOP (addi to $zero)
label_668e34:
    // 0x668e34: 0x2c646c25  sltiu       $a0, $v1, 0x6C25
    ctx->pc = 0x668e34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27685) ? 1 : 0);
label_668e38:
    // 0x668e38: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e38u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e3c:
    // 0x668e3c: 0x6c25202c  ldr         $a1, 0x202C($at)
    ctx->pc = 0x668e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_668e40:
    // 0x668e40: 0x25202c64  addiu       $zero, $t1, 0x2C64
    ctx->pc = 0x668e40u;
    // NOP (addiu $zero, ...)
label_668e44:
    // 0x668e44: 0x202c646c  addi        $t4, $at, 0x646C
    ctx->pc = 0x668e44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_668e48:
    // 0x668e48: 0x6c252020  ldr         $a1, 0x2020($at)
    ctx->pc = 0x668e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_668e4c:
    // 0x668e4c: 0x25202c64  addiu       $zero, $t1, 0x2C64
    ctx->pc = 0x668e4cu;
    // NOP (addiu $zero, ...)
label_668e50:
    // 0x668e50: 0x202c646c  addi        $t4, $at, 0x646C
    ctx->pc = 0x668e50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_668e54:
    // 0x668e54: 0x6c252020  ldr         $a1, 0x2020($at)
    ctx->pc = 0x668e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_668e58:
    // 0x668e58: 0x25202c64  addiu       $zero, $t1, 0x2C64
    ctx->pc = 0x668e58u;
    // NOP (addiu $zero, ...)
label_668e5c:
    // 0x668e5c: 0x202c646c  addi        $t4, $at, 0x646C
    ctx->pc = 0x668e5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_668e60:
    // 0x668e60: 0x2c646c25  sltiu       $a0, $v1, 0x6C25
    ctx->pc = 0x668e60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27685) ? 1 : 0);
label_668e64:
    // 0x668e64: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e64u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e68:
    // 0x668e68: 0x6c25202c  ldr         $a1, 0x202C($at)
    ctx->pc = 0x668e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_668e6c:
    // 0x668e6c: 0x20202c64  addi        $zero, $at, 0x2C64
    ctx->pc = 0x668e6cu;
    // NOP (addi to $zero)
label_668e70:
    // 0x668e70: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e70u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e74:
    // 0x668e74: 0x6c25202c  ldr         $a1, 0x202C($at)
    ctx->pc = 0x668e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_668e78:
    // 0x668e78: 0x20202c64  addi        $zero, $at, 0x2C64
    ctx->pc = 0x668e78u;
    // NOP (addi to $zero)
label_668e7c:
    // 0x668e7c: 0x646c2520  daddiu      $t4, $v1, 0x2520
    ctx->pc = 0x668e7cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)9504);
label_668e80:
    // 0x668e80: 0xa20  .word       0x00000A20                   # add         $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668e80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_668e84:
    // 0x668e84: 0x0  nop
    ctx->pc = 0x668e84u;
    // NOP
label_668e88:
    // 0x668e88: 0x223128  .word       0x00223128                   # mfsa        $a2 # 00220100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x668e88u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_668e8c:
    // 0x668e8c: 0x223130  tge         $at, $v0, 196
    ctx->pc = 0x668e8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_668e90:
    // 0x668e90: 0x223138  .word       0x00223138                   # dsll        $a2, $v0, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
label_668e94:
    // 0x668e94: 0x223298  .word       0x00223298                   # mult        $a2, $at, $v0 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x668e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_668e98:
    // 0x668e98: 0x223380  .word       0x00223380                   # sll         $a2, $v0, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_668e9c:
    // 0x668e9c: 0x223388  .word       0x00223388                   # jr          $at # 00023380 <InstrIdType: CPU_SPECIAL>
label_668ea0:
    if (ctx->pc == 0x668EA0u) {
        ctx->pc = 0x668EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668E9Cu;
        // 0x668ea0: 0x223390  .word       0x00223390                   # mfhi        $a2 # 00220380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x668EA4u;
        goto label_668ea4;
    }
    ctx->pc = 0x668E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x668EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668E9Cu;
        // 0x668ea0: 0x223390  .word       0x00223390                   # mfhi        $a2 # 00220380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x668E9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x668EA4u;
label_668ea4:
    // 0x668ea4: 0x223398  .word       0x00223398                   # mult        $a2, $at, $v0 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x668ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_668ea8:
    // 0x668ea8: 0x2233a0  .word       0x002233A0                   # add         $a2, $at, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668ea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_668eac:
    // 0x668eac: 0x2233a8  .word       0x002233A8                   # mfsa        $a2 # 00220380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x668eacu;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_668eb0:
    // 0x668eb0: 0x2233c8  .word       0x002233C8                   # jr          $at # 000233C0 <InstrIdType: CPU_SPECIAL>
label_668eb4:
    if (ctx->pc == 0x668EB4u) {
        ctx->pc = 0x668EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668EB0u;
        // 0x668eb4: 0x2233e8  .word       0x002233E8                   # mfsa        $a2 # 002203C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 6, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x668EB8u;
        goto label_668eb8;
    }
    ctx->pc = 0x668EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x668EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668EB0u;
        // 0x668eb4: 0x2233e8  .word       0x002233E8                   # mfsa        $a2 # 002203C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 6, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x668EB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x668EB8u;
label_668eb8:
    // 0x668eb8: 0x223408  .word       0x00223408                   # jr          $at # 00023400 <InstrIdType: CPU_SPECIAL>
label_668ebc:
    if (ctx->pc == 0x668EBCu) {
        ctx->pc = 0x668EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668EB8u;
        // 0x668ebc: 0x223428  .word       0x00223428                   # mfsa        $a2 # 00220400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 6, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x668EC0u;
        goto label_668ec0;
    }
    ctx->pc = 0x668EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x668EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668EB8u;
        // 0x668ebc: 0x223428  .word       0x00223428                   # mfsa        $a2 # 00220400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 6, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x668EB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x668EC0u;
label_668ec0:
    // 0x668ec0: 0x223430  tge         $at, $v0, 208
    ctx->pc = 0x668ec0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_668ec4:
    // 0x668ec4: 0x223438  .word       0x00223438                   # dsll        $a2, $v0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
label_668ec8:
    // 0x668ec8: 0x223440  .word       0x00223440                   # sll         $a2, $v0, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_668ecc:
    // 0x668ecc: 0x2235f0  tge         $at, $v0, 215
    ctx->pc = 0x668eccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_668ed0:
    // 0x668ed0: 0x2235f8  .word       0x002235F8                   # dsll        $a2, $v0, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 23);
label_668ed4:
    // 0x668ed4: 0x223600  .word       0x00223600                   # sll         $a2, $v0, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x668ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_668ed8:
    // 0x668ed8: 0x223608  .word       0x00223608                   # jr          $at # 00023600 <InstrIdType: CPU_SPECIAL>
label_668edc:
    if (ctx->pc == 0x668EDCu) {
        ctx->pc = 0x668EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668ED8u;
        // 0x668edc: 0x223610  .word       0x00223610                   # mfhi        $a2 # 00220600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x668EE0u;
        goto label_fallthrough_0x668ed8;
    }
    ctx->pc = 0x668ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x668EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x668ED8u;
        // 0x668edc: 0x223610  .word       0x00223610                   # mfhi        $a2 # 00220600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x668ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x668ed8:
    ctx->pc = 0x668EE0u;
}
